Year 1 - Sem 1

### **Project Name: "TicTacPro"**  
*(A professional twist on the classic game name, emphasizing clean code and functionality.)*

---

### **Project Overview**  
A **C++ Tic-Tac-Toe** implementation featuring:
- Two-player turn-based gameplay (X and O)
- Dynamic board display
- Win condition checking (rows, columns, diagonals)
- Input validation and replay functionality

---

### **Key Features**  
1. **Interactive Gameplay**  
   - Clear turn prompts ("Player one" or "Player two")  
   - Real-time board updates after each move  

2. **Robust Validation**  
   - Checks for invalid moves (out-of-bounds or occupied cells)  
   - Handles replay input (y/n) with error messaging  

3. **Win Detection**  
   - 8 possible win conditions (3 rows, 3 columns, 2 diagonals)  
   - Immediate game termination when a player wins  

4. **Clean Output Formatting**  
   - Visually clear 3x3 grid using simple characters (-, X, O)  

---

### **Skills Demonstrated**  
#### **Core Programming**  
✅ **Conditional Logic**: Nested `if-else` for win conditions  
✅ **Variables & References**: Efficient cell updates via reference variables  
✅ **Loop Control**: `while` for gameplay, `do-while` for replay  

#### **Problem-Solving**  
🔍 **Win Algorithm**: Checks all 8 possible winning combinations  
⚡ **Efficiency**: Breaks loop immediately upon win/draw  

#### **User Experience**  
📋 **Input Guidance**: Clear move entry prompts (row/column)  
🔄 **Replay System**: Seamless game reset without recompilation  

---

### **Code Highlights**  
```cpp
// Dynamic cell selection using nested ternary operators
char& cell = (row == 1) ? ((col == 1) ? v1 : ((col == 2) ? v2 : v3)) :
             (row == 2) ? ((col == 1) ? v4 : ((col == 2) ? v5 : v6)) :
             ((col == 1) ? v7 : ((col == 2) ? v8 : v9));
```

```cpp
// Win condition example (horizontal)
if ((v1 == 'X' && v2 == 'X' && v3 == 'X') || ... )
    cout << "Player two is the winner\n";
```

---

### **Suggested Improvements**  
1. **AI Opponent**: Add single-player mode with simple AI  
2. **Score Tracking**: Maintain win counts across sessions  
3. **Enhanced UI**: Color coding or numbered grid for clarity  
4. **Input Sanitization**: Handle non-integer inputs gracefully  

---

### **Why "TicTacPro"?**  
- **Professional**: Suitable for portfolios/resumes  
- **Memorable**: Familiar yet distinctive  
- **Expandable**: Foundation for more complex board games  

Contributers: Mousa M Mousa, Omar Mohamed, Youssef Hamed
