# Cafe Billing System

## Project Description
The **Cafe Billing System** is a simple C++ console-based application that allows users to order food items from a menu, calculate the total bill including GST, and display a detailed bill receipt. This project demonstrates the use of **C++ Standard Template Library (STL)**, particularly **maps**, to store menu items and their prices efficiently.

---

## Features
- Display a **menu** with food item names and their respective numbers.
- Accept **user input** for food selection and quantity.
- Calculate the **total bill** including **18% GST**.
- Print a well-formatted **bill receipt**.
- Handle **invalid input** gracefully.

---

## Technologies Used
- **C++**
- **Standard Template Library (STL)** (Maps)
- **Basic Console Input/Output**

---

## Installation & Usage
### 🔹 Prerequisites
- A **C++ compiler** like GCC, Clang, or MSVC.

### 🔹 Steps to Run the Project
1. **Clone the repository:**
   ```sh
   git clone https://github.com/yourusername/Cafe-Billing-System.git
   cd Cafe-Billing-System
   ```
2. **Compile the program:**
   ```sh
   g++ cafe_billing.cpp -o cafe_billing
   ```
3. **Run the executable:**
   ```sh
   ./cafe_billing
   ```

---

## Example Output
```
WELCOME TO BREW BOX CAFE!!!

                ................MENU...................
1-Burger
2-Veg club sandwich
...
15-Red Velvet Pastry
                .....................................

Please enter the corresponding number of your desired food item: 3
Please enter the quantity of food item: 2

Please Wait, Generating your Bill:

************************************************************************************
                           THE BREW BOX CAFE ,Inc.
                           SRM KTR;
                           CHENNAI.
====================================================================================
FOOD NAME                     PRICE                          QUANTITY
Margherita Pizza              Rs.150                         2
====================================================================================
TOTAL                        GST                            TOTAL(GST)
Rs.300                      Rs.54                           Rs.354
====================================================================================
               THANK YOU FOR ORDERING FOOD WITH US.
************************************************************************************
```

---

##  Project Structure
```
Cafe-Billing-System/
│── cafe_billing.cpp  # Main C++ source code
│── README.md         # Project documentation
```
