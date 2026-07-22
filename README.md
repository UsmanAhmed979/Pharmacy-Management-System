# 💊 Pharmacy Inventory Management System (PIMS)

Pharmacy Inventory Management System (PIMS) is a C++ desktop application designed to streamline pharmacy operations, automate stock management, handle customer orders, and maintain operational data using standard text-file persistence (`.txt` / file handling). 

Built strictly on Object-Oriented Programming (OOP) design patterns, PIMS offers role-based access control (Admin, Pharmacist, Customer), automated invoice generation, and real-time inventory tracking for low or expired medicine stock.

---

## 🌟 Key Features

* **🔐 Role-Based Authentication & User Management:**
  * Multi-level authorization for **Admin**, **Pharmacist**, and **Customer** roles.
  * Admin privileges to create, update, search, and delete registered user profiles.
* **📦 Inventory & Product Tracking:**
  * Perform complete CRUD operations on medicine listings (Name, ID, Expiry Date, Quantity, Price).
  * Dedicated stock monitoring to quickly query low-stock or expired items.
* **🛒 Order Processing & Invoice Generation:**
  * Place and process customer orders in real-time.
  * Automatic generation and recording of sales invoices upon order confirmation.
  * Order history lookup by Customer Name or Order ID.
* **📁 Text-Based File Persistence:**
  * Uses standard C++ file handling streams (`fstream`) to safely read from and write data to text files for persistent storage without requiring heavy external database servers.
* **🖥️ Graphical User Interface:**
  * Built with C++ WinForms to provide an intuitive, user-friendly desktop experience.

---

## 🏗️ System Architecture & Object-Oriented Design

PIMS implements the **four primary pillars of Object-Oriented Programming**:

1. **Encapsulation:** Class attributes (e.g., product details, credentials) are declared with `private` or `protected` access specifiers, exposed strictly via public getters/setters to guarantee data integrity.
2. **Inheritance:** 
   * *Single Inheritance:* `Admin` and `Pharmacist` classes inherit common properties from the base `User` class.
   * *Multi-Level Inheritance:* The `User` class inherits from the base `Authentication` class.
3. **Abstraction:** Internal logic such as `updateStock()`, `generateInvoice()`, and `checkExpiry()` is abstracted away from the UI presentation layer.
4. **Polymorphism:** Method overriding and virtual functions allow dynamic runtime behavior across `User`, `Product`, and `Order` classes (e.g., specialized `DisplayDetails()` implementations).

---

## 📁 Class Structure & Model Mapping

### **Core Classes**
* `Authentication` ➔ Base class handling user login validation.
* `User` ➔ Inherits from `Authentication`; acts as base class for system users.
* `Admin` & `Pharmacist` ➔ Inherit from `User` with role-specific capabilities.
* `Customer` ➔ Model handling customer profile data.
* `Product`, `Inventory`, `Order`, `Invoice`, `Sales` ➔ Operational models managing stock and financial data.

---

## 🛠️ Tech Stack

* **Language:** C++
* **GUI Framework:** C++ / WinForms
* **Storage:** Standard C++ File I/O (`fstream` text files)

---

## 🚀 Getting Started

### **Prerequisites**
* Visual Studio (with C++ Desktop Development and WinForms workload)

### **Setup Instructions**
1. **Clone the Repository:**
   ```bash
   git clone [https://github.com/your-username/Pharmacy-Inventory-Management-System.git](https://github.com/your-username/Pharmacy-Inventory-Management-System.git)
