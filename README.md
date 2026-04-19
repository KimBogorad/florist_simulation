# 🌸 Flower Delivery Simulation

A C++ object-oriented application that simulates a complex supply chain for ordering and delivering customized flower bouquets. This project demonstrates core OOP principles like inheritance, encapsulation, and the **Chain of Responsibility** design pattern.

## 🏗️ The Pipeline Architecture
The project simulates a multi-step request-and-return pipeline where each agent has a specific role in the process:

1. **Customer (`Person`)**: Initiates the order with a specific list of flowers.
2. **`Florist`**: The main orchestrator who manages the business logic.
3. **`Wholesaler`**: Forwards bulk requests to specialized growers.
4. **`Grower`**: Manages the cultivation process with a Gardener.
5. **`Gardener`**: Creates the `FlowersBouquet` object (The "source" of the pipeline).
6. **`FlowerArranger`**: Formats and styles the raw flowers into an arrangement.
7. **`DeliveryPerson`**: Handles the final hand-off to the recipient.

## 🛠️ Key Features
* **Dynamic Memory Management**: Utilizes heap allocation (`new`) for actors and products, with a centralized cleanup strategy to prevent memory leaks.
* **Encapsulation**: Strict use of access modifiers and public interfaces (`getName()`, `acceptOrder()`) to protect object state.
* **String Serialization**: Custom `toString()` implementation in `FlowersBouquet` for pretty-printing the final product.
* **Header Guards**: Implementation of `#ifndef` guards across all classes to prevent circular dependencies.

## 🚀 Getting Started

### Project Structure
* `/src`: Contains all `.cpp` implementation files.
* `/include`: Contains all `.h` header files.

### Compilation
To compile the project using `g++`, navigate to the `src` directory and run:
```bash
g++ -I./include src/*.cpp -o FloristSim
```

### Execution
```bash
./FloristSim
```