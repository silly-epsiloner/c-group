#ifndef BOOKING_H
#define BOOKING_H

#include <string>

// Forward declare Carpool class to avoid circular dependency
class Carpool;

class Booking {
private:
    std::string passengerUsername;
    Carpool* bookedCarpool; // Pointer to the booked carpool
    bool isAccepted;

public:
    // Constructor
    Booking(const std::string& passengerUsername, Carpool* carpool);

    // Accept or reject the booking
    void acceptBooking();
    void cancelBooking();

    // Display booking details
    void displayBookingDetails() const;

    // Getters
    std::string getPassengerUsername() const { return passengerUsername; }
    Carpool* getBookedCarpool() const { return bookedCarpool; }
    bool getIsAccepted() const { return isAccepted; }

    // Setters
    void setPassengerUsername(const std::string& username) { passengerUsername = username; }
    void setBookedCarpool(Carpool* carpool) { bookedCarpool = carpool; }
    void setIsAccepted(bool accepted) { isAccepted = accepted; }
};

#endif // BOOKING_H
