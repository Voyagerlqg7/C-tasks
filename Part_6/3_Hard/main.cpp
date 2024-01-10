#include <iostream>
#include <vector>
#include <string>


setlocale(LC_CTYPE, "rus");
// Структура для представления заявки на авиабилет
struct FlightRequest {
    std::string destination;
    int flightNumber;
    std::string passengerName;
    std::string departureDate;
};

// Класс для управления заявками на авиабилет
class FlightReservationSystem {
private:
    std::vector<FlightRequest> requests;

public:
    // Метод для добавления новой заявки
    void addRequest(const FlightRequest& request) {
        requests.push_back(request);
        std::cout << "Заявка успешно добавлена.\n";
    }

    // Метод для удаления заявки по номеру рейса
    void removeRequest(int flightNumber) {
        auto it = std::remove_if(requests.begin(), requests.end(),
            [flightNumber](const FlightRequest& request) {
                return request.flightNumber == flightNumber;
            });

        if (it != requests.end()) {
            requests.erase(it, requests.end());
            std::cout << "Заявка успешно удалена.\n";
        }
        else {
            std::cout << "Заявка с номером рейса " << flightNumber << " не найдена.\n";
        }
    }

    // Метод для вывода всех заявок
    void displayRequests() const {
        std::cout << "Список всех заявок:\n";
        for (const auto& request : requests) {
            std::cout << "Пункт назначения: " << request.destination << "\n";
            std::cout << "Номер рейса: " << request.flightNumber << "\n";
            std::cout << "ФИО пассажира: " << request.passengerName << "\n";
            std::cout << "Дата вылета: " << request.departureDate << "\n\n";
        }
    }
};

int main() {
    FlightReservationSystem reservationSystem;

    // Добавление заявок
    reservationSystem.addRequest({ "New York", 101, "John Doe", "2024-01-10" });
    reservationSystem.addRequest({ "Paris", 202, "Jane Smith", "2024-02-15" });
    reservationSystem.addRequest({ "Tokyo", 303, "Bob Johnson", "2024-03-20" });

    // Вывод всех заявок
    reservationSystem.displayRequests();

    // Удаление заявки по номеру рейса
    reservationSystem.removeRequest(202);

    // Вывод обновленного списка заявок
    reservationSystem.displayRequests();

    return 0;
}
