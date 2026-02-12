#include <iostream>  // Include the standard input-output stream library
using namespace std; // Standard input-output stream

int main() // Main function
{
    int quant;  // Quantity of items
    int choice; // User's choice of item

    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0; // Initialize quantities of items that we have in hotel

    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0; // Initialize sold quantities of items that we sold

    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0; // Initialize total price of items that we sold in hotel

    // Quantity of items we have in hotel

    cout << "\n\t\t\tQuantity of items we have in hotel"; // Display message for quantity of items in hotel
    cout << "\nRooms available: ";                        // Display message for available rooms
    cin >> Qrooms;                                        // Input quantity of rooms available
    cout << "Quantity of pasta: ";                        // Display message for quantity of pasta
    cin >> Qpasta;                                        // Input quantity of pasta available
    cout << "Quantity of burgers: ";                      // Display message for quantity of burgers
    cin >> Qburger;                                       // Input quantity of burgers available
    cout << "Quantity of noodles: ";                      // Display message for quantity of noodles
    cin >> Qnoodles;                                      // Input quantity of noodles available
    cout << "Quantity of shakes: ";                       // Display message for quantity of shakes
    cin >> Qshake;                                        // Input quantity of shakes available
    cout << "Quantity of chicken rolls: ";                // Display message for quantity of chicken rolls
    cin >> Qchicken;                                      // Input quantity of chicken rolls available

    // Display menu options for the user to select from

m:                                                              // Label for menu options
    cout << "\n\n\t\t\tPlease select from the menu options ";   // Display message to select from menu options
    cout << "\n\n1) Rooms";                                     // Option 1: Rooms
    cout << "\n2) Pasta";                                       // Option 2: Pasta
    cout << "\n3) Burgers";                                     // Option 3: Burgers
    cout << "\n4) Noodles";                                     // Option 4: Noodles
    cout << "\n5) Shakes";                                      // Option 5: Shakes
    cout << "\n6) Chicken Rolls";                               // Option 6: Chicken Rolls
    cout << "\n7) Information regarding sales and collection "; // Option 7: Information regarding sales and collection
    cout << "\n8) Exit";                                        // Option 8: Exit

    cout << "\n\nPlease enter your choice: "; // Prompt user to enter their choice
    cin >> choice;                            // Input user's choice

    // Switch case to handle user's choice.

    switch (choice)
    {
    case 1:                                               // Case for Rooms
        cout << "\nEnter the number of rooms you want: "; // Prompt user to enter number of rooms
        cin >> quant;                                     // Input quantity of rooms
        if (Qrooms - Srooms >= quant)                     // Check if enough rooms are available
        {
            Srooms += quant;             // Update sold rooms
            Total_rooms += quant * 1200; // Update total price for rooms
            cout << "\n"
                 << quant << " room/rooms have been alloted to you"; // Display message for rooms allotted
        }
        else // If not enough rooms are available

            cout << "\nOnly " << Qrooms - Srooms << " room/rooms are available"; // Display message if not enough rooms are available
        break;                                                                   // Exit the case

    case 2:                                                 // Case for pasta
        cout << "\nEnter the quantity of pasta you want: "; // Prompt user to enter quantity of pasta
        cin >> quant;                                       // Input quantity of pasta
        if (Qpasta - Spasta >= quant)                       // Check if enough pasta is available
        {
            Spasta += quant;            // Update sold pasta
            Total_pasta += quant * 250; // Update the total price for pasta
            cout << "\n"
                 << quant << " pasta has been ordered"; // Display message for pasta ordered
        }
        else // If not enough pasta is available

            cout << "\nOnly " << Qpasta - Spasta << " pasta is available"; // Display message if not enough pasta is available
        break;                                                             // Exit the case

    case 3:                                                   // Case for burgers
        cout << "\nEnter the quantity of burgers you want: "; // Prompt user to enter quantity of burgers
        cin >> quant;                                         // Input quantity of burgers
        if (Qburger - Sburger >= quant)                       // Check if enough burgers are available
        {
            Sburger += quant;            // Update sold burgers
            Total_burger += quant * 120; // Update total price for burgers
            cout << "\n"
                 << quant << " burger/burgers has been ordered"; // Display message for burgers ordered
        }
        else // If not enough burgers are available

            cout << "\nOnly " << Qburger - Sburger << " burger/burgers are available"; // Display message if not enough burgers are available
        break;                                                                         // Exit the case

    case 4:                                                   // Case for noodles
        cout << "\nEnter the quantity of noodles you want: "; // Prompt user to enter quantity of noodles
        cin >> quant;                                         // Input quantity of noodles
        if (Qnoodles - Snoodles >= quant)                     // Check if enough noodles are available
        {
            Snoodles += quant;            // Update sold noodles
            Total_noodles += quant * 150; // Update total price for noodles
            cout << "\n"
                 << quant << " noodles has been ordered"; // Display message for noodles ordered
        }
        else // If not enough noodles are available

            cout << "\nOnly " << Qnoodles - Snoodles << " noodles are available"; // Display message if not enough noodles are available
        break;                                                                    // Exit the case

    case 5:                                                  // Case for shakes
        cout << "\nEnter the quantity of shakes you want: "; // Prompt user to enter quantity of shakes
        cin >> quant;                                        // Input quantity of shakes
        if (Qshake - Sshake >= quant)                        // Check if enough shakes are available
        {
            Sshake += quant;            // Update sold shakes
            Total_shake += quant * 100; // Update total price for shakes
            cout << "\n"
                 << quant << " shake/shakes has been ordered"; // Display message for shakes ordered
        }
        else // If not enough shakes are available

            cout << "\nOnly " << Qshake - Sshake << " shake/shakes are available"; // Display message if not enough shakes are available
        break;                                                                     // Exit the case

    case 6:                                                         // Case for chicken rolls
        cout << "\nEnter the quantity of chicken rolls you want: "; // Prompt user to enter quantity of chicken rolls
        cin >> quant;                                               // Input quantity of chicken rolls
        if (Qchicken - Schicken >= quant)                           // Check if enough chicken rolls are available
        {
            Schicken += quant;            // Update sold chicken rolls
            Total_chicken += quant * 150; // Update total price for chicken rolls
            cout << "\n"
                 << quant << " chicken roll/rolls has been ordered"; // Display message for chicken rolls ordered
        }
        else // If not enough chicken rolls are available

            cout << "\nOnly " << Qchicken - Schicken << " chicken roll/rolls are available"; // Display message if not enough chicken rolls are available
        break;                                                                               // Exit the case

    case 7:                                                              // Case for information regarding sales and collection
        cout << "\n\t\tDetails of sales and collection: ";               // Display message for sales and collection details
        cout << "\n\nNumber of rooms we had: " << Qrooms;                // Display number of rooms available
        cout << "\nNumber of rooms we gave for rent: " << Srooms;        // Display number of rooms rented
        cout << "\nRemaining rooms: " << Qrooms - Srooms;                // Display remaining rooms
        cout << "\nTotal rooms collection for the day: " << Total_rooms; // Display total collection for rooms

        cout << "\n\nNumber of pasta we had: " << Qpasta;                // Display number of pasta available
        cout << "\nNumber of pasta we sold: " << Spasta;                 // Display number of pasta sold
        cout << "\nRemaining pasta: " << Qpasta - Spasta;                // Display remaining pasta
        cout << "\nTotal pasta collection for the day: " << Total_pasta; // Display total collection for pasta

        cout << "\n\nNumber of burgers we had: " << Qburger;                // Display number of burgers available
        cout << "\nNumber of burgers we sold: " << Sburger;                 // Display number of burgers sold
        cout << "\nRemaining burgers: " << Qburger - Sburger;               // Display remaining burgers
        cout << "\nTotal burgers collection for the day: " << Total_burger; // Display total collection for burgers

        cout << "\n\nNumber of noodles we had: " << Qnoodles;                // Display number of noodles available
        cout << "\nNumber of noodles we sold: " << Snoodles;                 // Display number of noodles sold
        cout << "\nRemaining noodles: " << Qnoodles - Snoodles;              // Display remaining noodles
        cout << "\nTotal noodles collection for the day: " << Total_noodles; // Display total collection for noodles

        cout << "\n\nNumber of shakes we had: " << Qshake;                // Display number of shakes available
        cout << "\nNumber of shakes we sold: " << Sshake;                 // Display number of shakes sold
        cout << "\nRemaining shakes: " << Qshake - Sshake;                // Display remaining shakes
        cout << "\nTotal shakes collection for the day: " << Total_shake; // Display total collection for shakes

        cout << "\n\nNumber of chicken rolls we had: " << Qchicken;                // Display number of chicken rolls available
        cout << "\nNumber of chicken rolls we sold: " << Schicken;                 // Display number of chicken rolls sold
        cout << "\nRemaining chicken rolls: " << Qchicken - Schicken;              // Display remaining chicken rolls
        cout << "\nTotal chicken rolls collection for the day: " << Total_chicken; // Display total collection for chicken rolls

        cout << "\n\nTotal collection for the day: " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken; // Display total collection for the day

        break; // Exit the case

    case 8:      // Case for exit
        exit(0); // Exit the program

    default:                                              // Default case if no valid choice is made
        cout << "\nPlease select from the given options"; // Display message to select from given options
    }
    goto m; // Go back to the menu for further choices
}
