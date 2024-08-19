#include <iostream>
using namespace std;

class StoreOrder {
private:
    static const double MINER_COST;
    static const double TOASTER_COST;
    static const double FAN_COST;
    static const double MINER_DISCOUNT;
    static const double TOASTER_DISCOUNT;
    static const double FAN_DISCOUNT;
    static const double SALES_TAX;

public:
    static inline double calculateDiscountedCost(double cost, double discount) {
        return cost - (cost * discount / 100);
    }

    static inline double calculateSalesTax(double netValue) {
        return netValue * SALES_TAX / 100;
    }

    double calculateTotalAmount(int n = 0, int m = 0, int p = 0) const {
        double minersCost = n * MINER_COST;
        double toastersCost = m * TOASTER_COST;
        double fansCost = p * FAN_COST;

        double minersNetCost = calculateDiscountedCost(minersCost, MINER_DISCOUNT);
        double toastersNetCost = calculateDiscountedCost(toastersCost, TOASTER_DISCOUNT);
        double fansNetCost = calculateDiscountedCost(fansCost, FAN_DISCOUNT);

        double netValue = minersNetCost + toastersNetCost + fansNetCost;
        double tax = calculateSalesTax(netValue);

        return netValue + tax;
    }
};

// Initialize static constants
const double StoreOrder::MINER_COST = 1500.0;
const double StoreOrder::TOASTER_COST = 200.0;
const double StoreOrder::FAN_COST = 450.0;
const double StoreOrder::MINER_DISCOUNT = 5.0;
const double StoreOrder::TOASTER_DISCOUNT = 10.0;
const double StoreOrder::FAN_DISCOUNT = 15.0;
const double StoreOrder::SALES_TAX = 10.0;

int main() {
    int n, m, p;

    cout << "Enter the number of miners: ";
    cin >> n;
    cout << "Enter the number of toasters: ";
    cin >> m;
    cout << "Enter the number of fans: ";
    cin >> p;

    StoreOrder order;
    double totalAmount = order.calculateTotalAmount(n, m, p);

    cout << "The total amount to be paid by the store is: Rs. " << totalAmount << endl;

    return 0;
}
