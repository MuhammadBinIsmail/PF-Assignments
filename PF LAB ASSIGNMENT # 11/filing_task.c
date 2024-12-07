#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "players_records.txt"
#define MAX_PLAYERS 5

struct player_data
{
    char name[20];
    char team[20];
};
struct bowling
{
    char type[10]; // seemer, pacer, spinner, or N/A
    char arm[5];   // left or right
    struct player_data ply;
};
struct batting
{
    char type[10];  // top order, middle order, lower order
    char handed[8]; // lefty or righty
    struct bowling ply2;
};

void create_player();
void read_players();
void update_player();
void delete_player();
void menu();
int main()
{
    menu();
    return 0;
}
void menu()
{
    int userinput;
    while (1)
    {
        printf("\nPlayer Data Records\n");
        printf("Press 1 to Add player\n");
        printf("Press 2 to View all players\n");
        printf("Press 3 to Update player\n");
        printf("Press 4 to Delete player\n");
        printf("Press 5 to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &userinput);
        switch (userinput)
        {
        case 1:
            create_player();
            break;
        case 2:
            read_players();
            break;
        case 3:
            update_player();
            break;
        case 4:
            delete_player();
            break;
        case 5:
            printf("Thank you.\n");
            exit(0);
        default:
            printf("Invalid choice. Please enter a valid choice.\n");
        }
    }
}

void create_player()
{
    FILE *file = fopen(FILENAME, "a");
    if (!file)
    {
        printf("Error opening file.\n");
        return;
    }
    struct batting new_player_record;
    printf("Enter player name: ");
    scanf("%s", new_player_record.ply2.ply.name);
    printf("Enter team name: ");
    scanf("%s", new_player_record.ply2.ply.team);
    printf("Enter new bowling type (seemer, pacer, spinner, N/A): ");
    scanf("%s", new_player_record.ply2.type);
    printf("Enter new bowling arm (left or right): ");
    scanf("%s", new_player_record.ply2.arm);
    printf("Enter new batting type (top order, middle order, lower order): ");
    scanf("%s", new_player_record.type);
    printf("Enter new batting handedness (lefty or righty): ");
    scanf("%s", new_player_record.handed);
    fwrite(&new_player_record, sizeof(struct batting), 1, file);
    fclose(file);
    printf("Player added successfully.\n");
}

void read_players()
{
    FILE *file = fopen(FILENAME, "r");
    if (!file)
    {
        printf("Error opening file. File may not exist.\n");
        return;
    }
    struct batting player_data;
    printf("\nPlayers List:\n");
    while (fread(&player_data, sizeof(struct batting), 1, file))
    {
        printf("Name: %s, Team: %s\n", player_data.ply2.ply.name, player_data.ply2.ply.team);
        printf("Bowling Type: %s, Arm: %s\n", player_data.ply2.type, player_data.ply2.arm);
        printf("Batting Type: %s, Handed: %s\n\n", player_data.type, player_data.handed);
    }
    fclose(file);
}

void update_player()
{
    FILE *file = fopen(FILENAME, "r+");
    if (!file)
    {
        printf("Error opening file.\n");
        return;
    }
    struct batting players[MAX_PLAYERS];
    struct batting updated_player;
    int found = 0, index = 0;
    char target[20];
    printf("Enter the name of the player to update the record: ");
    scanf("%s", target);
    while (fread(&players[index], sizeof(struct batting), 1, file))
    {
        if (strcmp(players[index].ply2.ply.name, target) == 0)
        {
            found = 1;
            break;
        }
        index++;
    }
    if (!found)
    {
        printf("Player not found in the record.\n");
        fclose(file);
        return;
    }
    printf("Enter new player name: ");
    scanf("%s", updated_player.ply2.ply.name);
    printf("Enter new team name: ");
    scanf("%s", updated_player.ply2.ply.team);
    printf("Enter new bowling type (seemer, pacer, spinner, N/A): ");
    scanf("%s", updated_player.ply2.type);
    printf("Enter new bowling arm (left or right): ");
    scanf("%s", updated_player.ply2.arm);
    printf("Enter new batting type (top order, middle order, lower order): ");
    scanf("%s", updated_player.type);
    printf("Enter new batting handedness (lefty or righty): ");
    scanf("%s", updated_player.handed);
    fseek(file, index * sizeof(struct batting), SEEK_SET);
    fwrite(&updated_player, sizeof(struct batting), 1, file);
    fclose(file);
    printf("Player updated successfully.\n");
}

void delete_player()
{
    FILE *file = fopen(FILENAME, "r");
    FILE *temp_file = fopen("temp.txt", "w");
    if (!file || !temp_file)
    {
        printf("Error opening file.\n");
        return;
    }
    struct batting player_data;
    char target[20];
    int found = 0;
    printf("Enter the name of the player to delete: ");
    scanf("%s", target);
    while (fread(&player_data, sizeof(struct batting), 1, file))
    {
        if (strcmp(player_data.ply2.ply.name, target) == 0)
        {
            found = 1;
        }
        else
        {
            fwrite(&player_data, sizeof(struct batting), 1, temp_file);
        }
    }
    fclose(file);
    fclose(temp_file);
    if (!found)
    {
        printf("Player not found.\n");
        remove("temp.txt");
        return;
    }
    remove(FILENAME);
    rename("temp.txt", FILENAME);
    printf("Player deleted successfully.\n");
}
