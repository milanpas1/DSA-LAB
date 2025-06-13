# 📘 DSA-LAB

This repository contains Data Structures and Algorithms (DSA) lab programs for college coursework.

---

## 🧪 Lab List

### 🔹 Lab 1: Insertion in an Array
- Inserts an element at a given position in a static array.

#### ✅ Algorithm
1. Start  
2. Initialize the array and size `n`  
3. Input the number `a` to insert and position `b`  
4. Check if `b > n`:  
   - If true, print "Invalid position" and stop  
5. Shift elements from the end to position `b`  
6. Insert `a` at position `b`  
7. Increase array size `n`  
8. Display the new array  
9. Stop  

#### 🔁 Flowchart Description
- **Start**
- Input original array  
- Input `a` (number) and `b` (position)  
- Check `b > n`  
  - Yes → Show "Invalid position", go to End  
  - No → Continue  
- Shift elements right from end to `b`  
- Insert element `a` at position `b`  
- Increment size `n`  
- Display updated array  
- **End**

---

### 🔹 Lab 2: Deletion from an Array
- Deletes an element from a given position in a static array.

#### ✅ Algorithm
1. Start  
2. Initialize the array and size `n`  
3. Input position `a` to delete  
4. Check if `a > n`:  
   - If true, print "Invalid position" and stop  
5. Shift elements left from position `a`  
6. Decrease array size `n`  
7. Display the new array  
8. Stop  

#### 🔁 Flowchart Description
- **Start**
- Input original array  
- Input `a` (position)  
- Check `a > n`  
  - Yes → Show "Invalid position", go to End  
  - No → Continue  
- Shift elements left from position `a`  
- Decrease size `n`  
- Display updated array  
- **End**

---

### 🔹 Lab 3: Tower of Hanoi
- Solves the classic Tower of Hanoi problem using recursion.

---

### 🔹 Lab 4: Stack Operations (Push and Pop)
- Implements a stack using arrays and performs push/pop operations.

---

Feel free to explore each lab folder for the source code and more details.
