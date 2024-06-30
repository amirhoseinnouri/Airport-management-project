// amir hosein nouri 18 june 2024 00:35 for the family XD
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for find_if
#include <time.h>

using namespace std;

class Ticket {
private:
    string flightSerial;
    string flightDate;
    string flightTime;
    string origin;
    string destination;
    string passengerName;
    string passengerID;
    string airplaneSerial;
    string pilotID;
    string baggageTag;
    double ticketPrice;

public:

    Ticket(string serial, string date, string time, string src, string dest,
    string name, string id, string planeSerial, string pilot,
    string baggage, double price) :  flightSerial(serial), flightDate(date), flightTime(time), origin(src), destination(dest),
    passengerName(name), passengerID(id), airplaneSerial(planeSerial), pilotID(pilot),
    baggageTag(baggage), ticketPrice(price) {}//baraie hazfe mosavi.



/// getters 
    string getFlightSerial() { return flightSerial; }
    string getFlightDate() { return flightDate; }
    string getFlightTime() { return flightTime; }
    string getOrigin() { return origin; }
    string getDestination() { return destination; }
    string getPassengerName() { return passengerName; }
    string getPassengerID() { return passengerID; }
    string getAirplaneSerial() { return airplaneSerial; }
    string getPilotID() { return pilotID; }
    string getBaggageTag() { return baggageTag; }
    double getTicketPrice() { return ticketPrice; }
};

///////////////////////////////////////////////////////////////////////////<<<<
class TaskList {
public:
    virtual void displayTasks() const = 0;
};
// override ba vertual estefade mishe iani to pedar estefade nmishe .
class FlightAttendant : public TaskList {
public:
    void displayTasks() const override {
        cout << "Tasks for Flight Attendant:" << endl;
        cout << "1. Passenger reception and service" << endl;
        cout << "2. Informing passengers about security measures" << endl;
        cout << "3. Coordination with the crew" << endl;
        cout << "4. Managing and attending to sick or injured passengers" << endl;
        cout << "5. Flight reporting including origin and destination" << endl;
        cout << "6. Maintaining order and cleanliness" << endl;
        cout << "7. Delivering baggage to the cargo hold" << endl;
    }
};

class Pilott : public TaskList {
public:
    void displayTasks() const override {
        cout << "Tasks for Pilot:" << endl;
        cout << "1. Flight weather forecasting" << endl;
        cout << "2. Aircraft navigation and control" << endl;
        cout << "3. Managing and responding to aircraft technical issues and reporting them" << endl;
        cout << "4. Communicating with air traffic control" << endl;
        cout << "5. Providing flight instructions and briefings for passengers" << endl;
        cout << "6. Handing over baggage to the cargo hold" << endl;
    }
};

class BaggageHandler : public TaskList {
public:
    void displayTasks() const override {
        cout << "Tasks for Baggage Handler:" << endl;
        cout << "1. Handling baggage which is common with pilot and flight attendant classes" << endl;
        cout << "2. Recording details of shipments such as customer name, address, and cost" << endl;
        cout << "3. Updating shipment lists" << endl;
        cout << "4. Logging kilometers traveled" << endl;
    }
};


//////////////////////////////////////////////////////////////////////>>>>
///////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


class Flightt {
public:
    virtual void showAvailableDestinations() {
        std::cout << "List of available destinations:\n";
    }
};


class Departure : public Flightt {
public:
    void showAvailableDestinations() override {
        std::cout << "List of available departure destinations:\n";
        for (const auto& destination : departureDestinations) {
            std::cout << destination << std::endl;
        }
    }

private:
    std::vector<std::string> departureDestinations = {
        "Los Angeles",
        "New York",
        "Detroit",
        "Las Vegas",
        "Paris",
        "London",
        "Tehran",
        "Venice",
        "Lisbon",
        "Istanbul",
        "Helsinki",
        "Singapore",
        "Beijing",
        "Tokyo",
        "St. Petersburg",
        "Bali",
        "Moscow",
        "Madrid",
        "Barcelona",
        "Berlin",
        "Rio",
        "Frankfurt",
        "Amsterdam"
    };
};
// auto baraie tarif moteghaier b soorat khodkar ast . 
class Return : public Flightt {
public:
    void showAvailableDestinations() override {
        std::cout << "List of available return destinations:\n";
        for (const auto& destinationn : returnDestinations) {
            std::cout << destinationn << std::endl;
        }
    }

private:
    std::vector<std::string> returnDestinations = {
        "Los Angeles",
        "New York",
        "Detroit",
        "Las Vegas",
        "Paris",
        "London",
        "Tehran",
        "Venice",
        "Lisbon",
        "Istanbul",
        "Helsinki",
        "Singapore",
        "Beijing",
        "Tokyo",
        "St. Petersburg",
        "Bali",
        "Moscow",
        "Madrid",
        "Barcelona",
        "Berlin",
        "Rio",
        "Frankfurt",
        "Amsterdam"
    };
};


///////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class Passenger {
private:
    string firstName;
    string lastName;
    string fatherName;
    string nationalID;
    string birthDate;
// setter
public:
    Passenger(string first, string last, string father, string id, string birth) : firstName(first), lastName(last), fatherName(father), nationalID(id), birthDate(birth) {}

// getters
    string getFirstName() { return firstName; }
    string getLastName() { return lastName; }
    string getFatherName() { return fatherName; }
    string getNationalID() { return nationalID; }
    string getBirthDate() { return birthDate; }
};

/////////////////////////////////////////////////////////////////////////////////////////////////


class Airplane {
private:
    string serialNumber;
    int seatCount;
    string dateTime;
    vector<string> flights;

public:
    Airplane(string serial, int seats, string date) : serialNumber(serial), seatCount(seats), dateTime(date) {}

    void addFlight(string flightInfo) {
        flights.push_back(flightInfo);
    }
//getters
    string getSerialNumber() { return serialNumber; }
    int getSeatCount() { return seatCount; }
    string getDateTime() { return dateTime; }
    vector<string> getFlights() { return flights; }
};

////////////////////////////////////////////////////////////////////////////////////////////////////


class CargoTransporter {
private:
    string serialNumber;
    string manufactureDate;

public:
    CargoTransporter(string serial, string date) : serialNumber(serial), manufactureDate(date) {}

//getters
    string getSerialNumber() { return serialNumber; }
    string getManufactureDate() { return manufactureDate; }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Steward {
private:
    string name;
    string lastName;
    string nationalCode;
    string personnelCode;
    string dateOfBirth;
    string hireDate;

public:
    Steward(string n, string ln, string nc, string pc, string dob, string hd) {
        name = n;
        lastName = ln;
        nationalCode = nc;
        personnelCode = pc;
        dateOfBirth = dob;
        hireDate = hd;
    }

    // Setters
    void setName(string n) { name = n; }
    void setLastName(string ln) { lastName = ln; }
    void setNationalCode(string nc) { nationalCode = nc; }
    void setPersonnelCode(string pc) { personnelCode = pc; }
    void setDateOfBirth(string dob) { dateOfBirth = dob; }
    void setHireDate(string hd) { hireDate = hd; }
    // Getters
    string getName() const { return name; }
    string getLastName() const { return lastName; }
    string getNationalCode() const { return nationalCode; }
    string getPersonnelCode() const { return personnelCode; }
    string getDateOfBirth() const { return dateOfBirth; }
    string getHireDate() const { return hireDate; }


    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "National Code: " << nationalCode << endl;
        cout << "Personnel Code: " << personnelCode << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
        cout << "Hire Date: " << hireDate << endl;
    }
};



/////////////////////////////////////////////////////////////////////////////////////////////////////

// yek noo dade ke meghdar dade mish az 0 ta 3.
enum Rank { Grade1, Grade2, Grade3 }; 

class Pilot {
private:
    string nationalCode;
    string personnelCode;
    string firstName;
    string lastName;
    string dateOfBirth;
    string hireDate;
    Rank rank;

public:
    Pilot(string nc, string pc, string fn, string ln, string dob, string hd, Rank r) {
        nationalCode = nc;
        personnelCode = pc;
        firstName = fn;
        lastName = ln;
        dateOfBirth = dob;
        hireDate = hd;
        rank = r;
    }

    // Setters
    void setNationalCode(string nc) { nationalCode = nc; }
    void setPersonnelCode(string pc) { personnelCode = pc; }
    void setFirstName(string fn) { firstName = fn; }
    void setLastName(string ln) { lastName = ln; }
    void setDateOfBirth(string dob) { dateOfBirth = dob; }
    void setHireDate(string hd) { hireDate = hd; }
    void setRank(Rank r) { rank = r; }

    // Getters
    string getNationalCode() const { return nationalCode; }
    string getPersonnelCode() const { return personnelCode; }
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getDateOfBirth() const { return dateOfBirth; }
    string getHireDate() const { return hireDate; }
    Rank getRank() const { return rank; }


    void displayDetails() const {
        cout << "National Code: " << nationalCode << endl;
        cout << "Personnel Code: " << personnelCode << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
        cout << "Hire Date: " << hireDate << endl;
        cout << "Rank: ";
        switch (rank) {
            case Grade1:
                cout << "Grade 1" << endl;
                break;
            case Grade2:
                cout << "Grade 2" << endl;
                break;
            case Grade3:
                cout << "Grade 3" << endl;
                break;
            default:
                cout << "Unknown" << endl;
                break;
        }
    }
};




//////////////////////////////////////////////////////////////////////////////////////////////////////

class Flight {
private:
    int serialNumber;
    int planeSerialNumber;
    string origin;
    string destination;
    string date;
    string pilot;
    string departureTime;
    int passengersCount;
    int stewardsCount;

public:
    Flight(int serial, int planeSerial, string org, string dest, string dt, string pl, string depTime, int passCount, int stewCount) {
        serialNumber = serial;
        planeSerialNumber = planeSerial;
        origin = org;
        destination = dest;
        date = dt;
        pilot = pl;
        departureTime = depTime;
        passengersCount = passCount;
        stewardsCount = stewCount;
    }

    // Getters
    int getSerialNumber() const { return serialNumber; }
    int getPlaneSerialNumber() const { return planeSerialNumber; }
    string getOrigin() const { return origin; }
    string getDestination() const { return destination; }
    string getDate() const { return date; }
    string getPilot() const { return pilot; }
    string getDepartureTime() const { return departureTime; }
    int getPassengersCount() const { return passengersCount; }
    int getStewardsCount() const { return stewardsCount; }

    // Setters
    void setSerialNumber(int serial) { serialNumber = serial; }
    void setPlaneSerialNumber(int planeSerial) { planeSerialNumber = planeSerial; }
    void setOrigin(string org) { origin = org; }
    void setDestination(string dest) { destination = dest; }
    void setDate(string dt) { date = dt; }
    void setPilot(string pl) { pilot = pl; }
    void setDepartureTime(string depTime) { departureTime = depTime; }
    void setPassengersCount(int passCount) { passengersCount = passCount; }
    void setStewardsCount(int stewCount) { stewardsCount = stewCount; }

    void displayDetails() {
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Plane Serial Number: " << planeSerialNumber << endl;
        cout << "Origin: " << origin << endl;
        cout << "Destination: " << destination << endl;
        cout << "Date: " << date << endl;
        cout << "Pilot: " << pilot << endl;
        cout << "Departure Time: " << departureTime << endl;
        cout << "Passengers Count: " << passengersCount << endl;
        cout << "Stewards Count: " << stewardsCount << endl;
    }
};


////////////////////////////////////////////////////////////////////////////////////////////////////////


void addNewObject(vector<Ticket> &tickets, vector<Passenger> &passengers, vector<Airplane> &airplanes,
                  vector<CargoTransporter> &cargoTransporters, vector<Steward> &stewards, vector<Pilot> &pilots,
                  vector<Flight> &flights) {
    cout << "Adding new object..." << endl;
    cout << "1. Ticket" << endl;
    cout << "2. Passenger" << endl;
    cout << "3. Airplane" << endl;
    cout << "4. Cargo Transporter" << endl;
    cout << "5. Steward" << endl;
    cout << "6. Pilot" << endl;
    cout << "7. Flight" << endl;
    cout << "Enter your choice: ";
    
    int choice;
    cin >> choice;
    
    switch (choice) {
        case 1: {
            string serial, date, time, src, dest, name, id, planeSerial, pilotID, baggage;
            double price;
            
            cout << "Enter ticket details:" << endl;
            cout << "Serial: ";
            cin >> serial;
            cout << "Date: ";
            cin >> date;
            cout << "Time: ";
            cin >> time;
            cout << "Source: ";
            cin >> src;
            cout << "Destination: ";
            cin >> dest;
            cout << "Passenger Name: ";
            cin >> name;
            cout << "Passenger ID: ";
            cin >> id;
            cout << "Airplane Serial: ";
            cin >> planeSerial;
            cout << "Pilot ID: ";
            cin >> pilotID;
            cout << "Baggage Tag: ";
            cin >> baggage;
            cout << "Price: ";
            cin >> price;
            
            tickets.emplace_back(serial, date, time, src, dest, name, id, planeSerial, pilotID, baggage, price);
            cout << "Ticket added successfully!" << endl;
            break;
        }
        case 2:{
            // Add Passenger
            string firstName, lastName, fatherName, nationalID, birthDate;
            cout << "Enter passenger details:" << endl;
            cout << "First Name: ";
            cin >> firstName;
            cout << "Last Name: ";
            cin >> lastName;
            cout << "Father Name: ";
            cin >> fatherName;
            cout << "National ID: ";
            cin >> nationalID;
            cout << "Birth Date: ";
            cin >> birthDate;
// miad asl dade ro mindaze dakhel vector barkhalaf pushback k copy mindaze.
            passengers.emplace_back(firstName, lastName, fatherName, nationalID, birthDate);
            cout << "Passenger added successfully!" << endl;
            break;
        }
        case 3: {
            string serial;
            int seats;
            string date;

            cout << "Enter airplane details:" << endl;
            cout << "Serial Number: ";
            cin >> serial;
            cout << "Seat Count: ";
            cin >> seats;
            cout << "Manufacture Date: ";
            cin >> date;

            airplanes.emplace_back(serial, seats, date);
            cout << "Airplane added successfully!" << endl;
            break;
        }
        case 4: {
             string serial, date;
            cout << "Enter cargo transporter details:" << endl;
            cout << "Serial Number: ";
            cin >> serial;
            cout << "Manufacture Date: ";
            cin >> date;
            
            cargoTransporters.emplace_back(serial, date);
            cout << "Cargo transporter added successfully!" << endl;
            break;
        }
        case 5: {
                string name, lastName, nationalCode, personnelCode, dateOfBirth, hireDate;
                cout << "Enter steward details:" << endl;
                cout << "Name: ";
                cin >> name;
                cout << "Last Name: ";
                cin >> lastName;
                cout << "National Code: ";
                cin >> nationalCode;
                cout << "Personnel Code: ";
                cin >> personnelCode;
                cout << "Date of Birth: ";
                cin >> dateOfBirth;
                cout << "Hire Date: ";
                cin >> hireDate;

                stewards.emplace_back(name, lastName, nationalCode, personnelCode, dateOfBirth, hireDate);
                cout << "Steward added successfully!" << endl;
                break;
            }
            case 6: {
                    // Add Pilot
                    string nationalCode, personnelCode, firstName, lastName, dateOfBirth, hireDate;
                    int rankInt;
                    Rank rank;
                    
                    cout << "Enter pilot details:" << endl;
                    cout << "National Code: ";
                    cin >> nationalCode;
                    cout << "Personnel Code: ";
                    cin >> personnelCode;
                    cout << "First Name: ";
                    cin >> firstName;
                    cout << "Last Name: ";
                    cin >> lastName;
                    cout << "Date of Birth: ";
                    cin >> dateOfBirth;
                    cout << "Hire Date: ";
                    cin >> hireDate;
                    cout << "Rank (1 for Grade1, 2 for Grade2, 3 for Grade3): ";
                    cin >> rankInt;
                    
                    
                    switch (rankInt) {
                        case 1:
                            rank = Grade1;
                            break;
                        case 2:
                            rank = Grade2;
                            break;
                        case 3:
                            rank = Grade3;
                            break;
                        default:
                            cout << "Invalid rank! Defaulting to Grade1." << endl;
                            rank = Grade1;
                            break;
                    }
                    
                    pilots.emplace_back(nationalCode, personnelCode, firstName, lastName, dateOfBirth, hireDate, rank);
                    cout << "Pilot added successfully!" << endl;
                    break;
                }
                case 7: {
                        int serial, planeSerial, passCount, stewCount;
                        string org, dest, date, pilot, depTime;

                        cout << "Enter flight details:" << endl;
                        cout << "Serial Number: ";
                        cin >> serial;
                        cout << "Plane Serial Number: ";
                        cin >> planeSerial;
                        cout << "Origin: ";
                        cin >> org;
                        cout << "Destination: ";
                        cin >> dest;
                        cout << "Date: ";
                        cin >> date;
                        cout << "Pilot: ";
                        cin >> pilot;
                        cout << "Departure Time: ";
                        cin >> depTime;
                        cout << "Passengers Count: ";
                        cin >> passCount;
                        cout << "Stewards Count: ";
                        cin >> stewCount;

                        flights.emplace_back(serial, planeSerial, org, dest, date, pilot, depTime, passCount, stewCount);
                        cout << "Flight added successfully!" << endl;
                        break;
                    }



        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void removeObject(vector<Ticket> &tickets, vector<Passenger> &passengers, vector<Airplane> &airplanes,
                  vector<CargoTransporter> &cargoTransporters, vector<Steward> &stewards, vector<Pilot> &pilots,
                  vector<Flight> &flights) {
    cout << "Removing object..." << endl;
    cout << "1. Ticket" << endl;
    cout << "2. Passenger" << endl;
    cout << "3. Airplane" << endl;
    cout << "4. Cargo Transporter" << endl;
    cout << "5. Steward" << endl;
    cout << "6. Pilot" << endl;
    cout << "7. Flight" << endl;
    cout << "Enter your choice: ";
    
    int choice;
    cin >> choice;
    
    switch (choice) {
        case 1: {
            string serial;
            cout << "Enter ticket serial to remove: ";
            cin >> serial;
            
            // it be har ghesmat az ticket eshare mikonad 
            for (auto it = tickets.begin(); it != tickets.end(); ++it) { // != yani bishtar az end naro.//it sabet farz shode faghat baraie vector
                if (it->getFlightSerial() == serial) {
                    tickets.erase(it);// pack kon 
                    cout << "Ticket removed successfully!" << endl;
                    return; 
                }
            }
            
          
            cout << "Ticket with serial " << serial << " not found." << endl;
            break;
        }
        case 2: {
    string nationalID;
    cout << "Enter passenger's National ID to remove: ";
    cin >> nationalID;

   
    for (auto it = passengers.begin(); it != passengers.end(); ++it) {
        if (it->getNationalID() == nationalID) {
            passengers.erase(it);
            cout << "Passenger removed successfully!" << endl;
            return; 
        }
    }

    
    cout << "Passenger with National ID " << nationalID << " not found." << endl;
    break;
}

        case 3: {
                        string serial;
            cout << "Enter airplane serial to remove: ";
            cin >> serial;

            
            for (auto it = airplanes.begin(); it != airplanes.end(); ++it) {
                if (it->getSerialNumber() == serial) {
                    airplanes.erase(it);
                    cout << "Airplane removed successfully!" << endl;
                    return; 
                }
            }

            
            cout << "Airplane with serial " << serial << " not found." << endl;
            break;
        }

        case 4: {
           string serial;
            cout << "Enter cargo transporter serial to remove: ";
            cin >> serial;
            
            
            for (auto it = cargoTransporters.begin(); it != cargoTransporters.end(); ++it) {
                if (it->getSerialNumber() == serial) {
                    cargoTransporters.erase(it);
                    cout << "Cargo transporter removed successfully!" << endl;
                    return; 
                }
            }
            
            
            cout << "Cargo transporter with serial " << serial << " not found." << endl;
            break;
        }
        case 5: {
                string personnelCode;
                cout << "Enter steward's Personnel Code to remove: ";
                cin >> personnelCode;

                
                auto it = find_if(stewards.begin(), stewards.end(), [&](const Steward &s) {
                    return s.getPersonnelCode() == personnelCode;
                });

                if (it != stewards.end()) {
                    stewards.erase(it);
                    cout << "Steward removed successfully!" << endl;
                } else {
                    cout << "Steward with Personnel Code " << personnelCode << " not found." << endl;
                }
                break;
            }

        case 6: {
                // Remove Pilot
                string code;
                cout << "Enter pilot's National Code or Personnel Code to remove: ";
                cin >> code;

               //[&] marboot be find if ast ke be tor daghigh be pilot eshare darad .
                auto it = find_if(pilots.begin(), pilots.end(), [&](const Pilot &p) {
                    return p.getNationalCode() == code || p.getPersonnelCode() == code;
                });

                if (it != pilots.end()) {
                    pilots.erase(it);
                    cout << "Pilot removed successfully!" << endl;
                } else {
                    cout << "Pilot with Code " << code << " not found." << endl;
                }
                break;
            }

        case 7: {
                int serial;
                cout << "Enter flight serial number to remove: ";
                cin >> serial;

                auto it = find_if(flights.begin(), flights.end(), [&](const Flight &f) {
                    return f.getSerialNumber() == serial;
                });

                if (it != flights.end()) {
                    flights.erase(it);
                    cout << "Flight removed successfully!" << endl;
                } else {
                    cout << "Flight with serial number " << serial << " not found." << endl;
                }
                break;
            }

        default:
            cout << "Invalid choice! Please enter a number between 1 and 7." << endl;
            break;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void generateReport(const vector<Ticket> &tickets, const vector<Passenger> &passengers,
                    const vector<Airplane> &airplanes, const vector<CargoTransporter> &cargoTransporters,
                    const vector<Steward> &stewards, const vector<Pilot> &pilots, const vector<Flight> &flights) {
  
    int totalPassengers = passengers.size();
    int totalStewards = stewards.size();
    int totalCargoTransporters = cargoTransporters.size();
    int totalFlights = flights.size();
    int totalTickets = tickets.size();


    cout << "Report:" << endl;
    cout << "Total Passengers: " << totalPassengers << endl;
    cout << "Total Stewards: " << totalStewards << endl;
    cout << "Total Cargo Transporters: " << totalCargoTransporters << endl;
    cout << "Total Flights: " << totalFlights << endl;
    cout << "Total Tickets Issued: " << totalTickets << endl;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void editObject(vector<Ticket> &tickets, vector<Passenger> &passengers, vector<Airplane> &airplanes,
                vector<CargoTransporter> &cargoTransporters, vector<Steward> &stewards, vector<Pilot> &pilots,
                vector<Flight> &flights) {
    cout << "Editing object..." << endl;
    cout << "1. Ticket" << endl;
    cout << "2. Passenger" << endl;
    cout << "3. Airplane" << endl;
    cout << "4. Cargo Transporter" << endl;
    cout << "5. Steward" << endl;
    cout << "6. Pilot" << endl;
    cout << "7. Flight" << endl;
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1: {
            string serial;
            cout << "Enter ticket serial to edit: ";
            cin >> serial;

            // Search for the ticket with the given serial number
            for (auto &ticket : tickets) {
                if (ticket.getFlightSerial() == serial) {
                    // Modify the ticket details
                    string date, time, src, dest, name, id, planeSerial, pilotID, baggage;
                    double price;

                    cout << "Enter new ticket details:" << endl;
                    cout << "Serial: ";
                    cin >> serial;
                    cout << "Date: ";
                    cin >> date;
                    cout << "Time: ";
                    cin >> time;
                    cout << "Source: ";
                    cin >> src;
                    cout << "Destination: ";
                    cin >> dest;
                    cout << "Passenger Name: ";
                    cin >> name;
                    cout << "Passenger ID: ";
                    cin >> id;
                    cout << "Airplane Serial: ";
                    cin >> planeSerial;
                    cout << "Pilot ID: ";
                    cin >> pilotID;
                    cout << "Baggage Tag: ";
                    cin >> baggage;
                    cout << "Price: ";
                    cin >> price;

                   
                    ticket = Ticket(serial, date, time, src, dest, name, id, planeSerial, pilotID, baggage, price);
                    cout << "Ticket updated successfully!" << endl;
                    return; 
                }
            }

            
            cout << "Ticket with serial " << serial << " not found." << endl;
            break;
        }
        case 2: {
            string nationalID;
            cout << "Enter passenger's National ID to edit: ";
            cin >> nationalID;

         
            for (auto &passenger : passengers) {
                if (passenger.getNationalID() == nationalID) {
                    
                    string firstName, lastName, fatherName, birthDate;

                    cout << "Enter new passenger details:" << endl;
                    cout << "First Name: ";
                    cin >> firstName;
                    cout << "Last Name: ";
                    cin >> lastName;
                    cout << "Father Name: ";
                    cin >> fatherName;
                    cout << "Birth Date: ";
                    cin >> birthDate;

                    // Update the passenger
                    passenger = Passenger(firstName, lastName, fatherName, nationalID, birthDate);
                    cout << "Passenger updated successfully!" << endl;
                    return; 
                }
            }

            
            cout << "Passenger with National ID " << nationalID << " not found." << endl;
            break;
        }
        case 3: {
            string serial;
            cout << "Enter airplane serial to edit: ";
            cin >> serial;

            
            for (auto &airplane : airplanes) {
                if (airplane.getSerialNumber() == serial) {
                   
                    int seats;
                    string date;

                    cout << "Enter new airplane details:" << endl;
                    cout << "Serial Number: ";
                    cin >> serial;
                    cout << "Seat Count: ";
                    cin >> seats;
                    cout << "Manufacture Date: ";
                    cin >> date;

                   
                    airplane = Airplane(serial, seats, date);
                    cout << "Airplane updated successfully!" << endl;
                    return; 
                }
            }

            
            cout << "Airplane with serial " << serial << " not found." << endl;
            break;
        }
        case 4: {
            string serial;
            cout << "Enter cargo transporter serial to edit: ";
            cin >> serial;

            
            for (auto &cargoTransporter : cargoTransporters) {
                if (cargoTransporter.getSerialNumber() == serial) {
                    
                    string date;

                    cout << "Enter new cargo transporter details:" << endl;
                    cout << "Serial Number: ";
                    cin >> serial;
                    cout << "Manufacture Date: ";
                    cin >> date;

                    
                    cargoTransporter = CargoTransporter(serial, date);
                    cout << "Cargo transporter updated successfully!" << endl;
                    return; 
                }
            }

            
            cout << "Cargo transporter with serial " << serial << " not found." << endl;
            break;
        }
        case 5: {
            string personnelCode;
            cout << "Enter steward's Personnel Code to edit: ";
            cin >> personnelCode;

          
            auto it = find_if(stewards.begin(), stewards.end(), [&](const Steward &s) {
                return s.getPersonnelCode() == personnelCode;
            });

            if (it != stewards.end()) {
               
                string name, lastName, nationalCode, dateOfBirth, hireDate;

                cout << "Enter new steward details:" << endl;
                cout << "Name: ";
                cin >> name;
                cout << "Last Name: ";
                cin >> lastName;
                cout << "National Code: ";
                cin >> nationalCode;
                cout << "Date of Birth: ";
                cin >> dateOfBirth;
                cout << "Hire Date: ";
                cin >> hireDate;

               
                it->setName(name);
                it->setLastName(lastName);
                it->setNationalCode(nationalCode);
                it->setDateOfBirth(dateOfBirth);
                it->setHireDate(hireDate);
                cout << "Steward updated successfully!" << endl;
            } else {
                cout << "Steward with Personnel Code " << personnelCode << " not found." << endl;
            }
            break;
        }
        case 6: {
            string code;
            cout << "Enter pilot's National Code or Personnel Code to edit: ";
            cin >> code;

            
            auto it = find_if(pilots.begin(), pilots.end(), [&](const Pilot &p) {
                return p.getNationalCode() == code || p.getPersonnelCode() == code;
            });

            if (it != pilots.end()) {
                
                string nationalCode, personnelCode, firstName, lastName, dateOfBirth, hireDate;
                int rankInt;
                Rank rank;

                cout << "Enter new pilot details:" << endl;
                cout << "National Code: ";
                cin >> nationalCode;
                cout << "Personnel Code: ";
                cin >> personnelCode;
                cout << "First Name: ";
                cin >> firstName;
                cout << "Last Name: ";
                cin >> lastName;
                cout << "Date of Birth: ";
                cin >> dateOfBirth;
                cout << "Hire Date: ";
                cin >> hireDate;
                cout << "Rank (1 for Grade1, 2 for Grade2, 3 for Grade3): ";
                cin >> rankInt;

            
                switch (rankInt) {
                    case 1:
                        rank = Grade1;
                        break;
                    case 2:
                        rank = Grade2;
                        break;
                    case 3:
                        rank = Grade3;
                        break;
                    default:
                        cout << "Invalid rank! Defaulting to Grade1." << endl;
                        rank = Grade1;
                        break;
                }

                
                it->setNationalCode(nationalCode);
                it->setPersonnelCode(personnelCode);
                it->setFirstName(firstName);
                it->setLastName(lastName);
                it->setDateOfBirth(dateOfBirth);
                it->setHireDate(hireDate);
                it->setRank(rank);
                cout << "Pilot updated successfully!" << endl;
            } else {
                cout << "Pilot with Code " << code << " not found." << endl;
            }
            break;
        }
        case 7: {
           }
    }
                }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main() {
    time_t a;;
    time(&a);
    tm *b; //local time 
    b = localtime (&a);
        Departure departureFlight;
        Return returnFlight;
        
    vector<Ticket> tickets;
    vector<Passenger> passengers;
    vector<Airplane> airplanes;
    vector<CargoTransporter> cargoTransporters;
    vector<Steward> stewards;
    vector<Pilot> pilots;
    vector<Flight> flights;
// task 
    FlightAttendant fa;
    Pilott piloti;
    BaggageHandler handler;
    // Main menu loop
    while (true) {
         time_t a;;
            time(&a);
            tm *b; //local time 
            b = localtime (&a);
            cout<<endl;
        cout<<" "<<b->tm_year+1900<<"/"<<b->tm_mon+1<<"/"<<b->tm_mday<<"    "<<b->tm_hour<<":"<<b->tm_min;
        cout<<endl<<"\n";
        
        cout << "Main Menu:" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Remove Item" << endl;
        cout << "3. Reporting" << endl;
        cout << "4. Edit" << endl;
        cout << "5. Exit" << endl;
        cout << "6. tasks " <<endl;
        cout << "7. list of countries available for flight :"<<endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                addNewObject(tickets, passengers, airplanes, cargoTransporters, stewards, pilots, flights);
                break;
            case 2:
                removeObject(tickets, passengers, airplanes, cargoTransporters, stewards, pilots, flights);
                break;
            case 3:
                generateReport(tickets, passengers, airplanes, cargoTransporters, stewards, pilots, flights);
                break;
            case 4:
                editObject(tickets, passengers, airplanes, cargoTransporters, stewards, pilots, flights);
                break;
            case 5:
                return 0;
            case 6:
                fa.displayTasks();
                cout << endl;
                piloti.displayTasks();
                cout << endl;
                handler.displayTasks();
                break;

            case 7:
            departureFlight.showAvailableDestinations();
            returnFlight.showAvailableDestinations();
            break;

            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    }

    return 0;
}


