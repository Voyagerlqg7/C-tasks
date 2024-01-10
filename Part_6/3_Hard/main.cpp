#include <iostream>
#include <vector>
#include <string>


setlocale(LC_CTYPE, "rus");
// ��������� ��� ������������� ������ �� ���������
struct FlightRequest {
    std::string destination;
    int flightNumber;
    std::string passengerName;
    std::string departureDate;
};

// ����� ��� ���������� �������� �� ���������
class FlightReservationSystem {
private:
    std::vector<FlightRequest> requests;

public:
    // ����� ��� ���������� ����� ������
    void addRequest(const FlightRequest& request) {
        requests.push_back(request);
        std::cout << "������ ������� ���������.\n";
    }

    // ����� ��� �������� ������ �� ������ �����
    void removeRequest(int flightNumber) {
        auto it = std::remove_if(requests.begin(), requests.end(),
            [flightNumber](const FlightRequest& request) {
                return request.flightNumber == flightNumber;
            });

        if (it != requests.end()) {
            requests.erase(it, requests.end());
            std::cout << "������ ������� �������.\n";
        }
        else {
            std::cout << "������ � ������� ����� " << flightNumber << " �� �������.\n";
        }
    }

    // ����� ��� ������ ���� ������
    void displayRequests() const {
        std::cout << "������ ���� ������:\n";
        for (const auto& request : requests) {
            std::cout << "����� ����������: " << request.destination << "\n";
            std::cout << "����� �����: " << request.flightNumber << "\n";
            std::cout << "��� ���������: " << request.passengerName << "\n";
            std::cout << "���� ������: " << request.departureDate << "\n\n";
        }
    }
};

int main() {
    FlightReservationSystem reservationSystem;

    // ���������� ������
    reservationSystem.addRequest({ "New York", 101, "John Doe", "2024-01-10" });
    reservationSystem.addRequest({ "Paris", 202, "Jane Smith", "2024-02-15" });
    reservationSystem.addRequest({ "Tokyo", 303, "Bob Johnson", "2024-03-20" });

    // ����� ���� ������
    reservationSystem.displayRequests();

    // �������� ������ �� ������ �����
    reservationSystem.removeRequest(202);

    // ����� ������������ ������ ������
    reservationSystem.displayRequests();

    return 0;
}
