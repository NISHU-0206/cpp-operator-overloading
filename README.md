# Complex Number Operations in C++

This project demonstrates the use of **Object-Oriented Programming (OOP)** concepts in C++, including:

- Operator Overloading
- Constructor Overloading
- Type Casting
- Complex Number Arithmetic (+, -, *)

---

## 📁 Features

### ✅ Class: `ComplexNumber`

This class represents a complex number of the form `a + jb` where:

- `a` is the real part
- `b` is the imaginary part

### 🛠️ Constructors Used

- **Default Constructor** – Initializes both real and imaginary parts to 0.
- **Parameterized Constructor** – Initializes with user-defined real and imaginary values.
- **Constructor with `double` argument** – Allows conversion from `double` to `ComplexNumber` with imaginary part set to 0.

### 🔁 Operator Overloading

The following operators are overloaded for complex number arithmetic:

- `+` : Addition of two complex numbers
- `-` : Subtraction of two complex numbers
- `*` : Multiplication of two complex numbers (Note: The multiplication logic has a minor issue — see ⚠️ Notes)

### 🔄 Type Casting

- Complex number to `double` – Extracts and returns the real part.

---

## 📌 Program Flow

1. Create complex numbers using constructors.
2. Perform arithmetic operations:
   - `c3 = c1 + c2`
   - `c4 = c1 - c2`
   - `c5 = c1 * c2`
3. Display results.
4. Convert a complex number to a double.
5. Convert a double back into a complex number.

## ⚠️ Notes

- In the `operator *` implementation, the multiplication is incorrect. It uses uninitialized values (`x.r`, `x.i`) instead of the actual logic for complex number multiplication.  
  **Correct formula** for multiplication:
(a + jb) * (c + jd) = (ac - bd) + j(ad + bc)

- The constructor `ComplexNumber(double d)` should not create a new object inside it (currently unused variable `ComplexNumber y;`).

---

## 🧑‍💻 How to Run

1. Save the code as `complex_number.cpp`
2. Compile using g++:
g++ complex_number.cpp -o complex

3. Run:
./complex
