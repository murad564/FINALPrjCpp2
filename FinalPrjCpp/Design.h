//#pragma once
//
//enum Color {
//    Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray,
//    DarkGray, LightBlue = 9, LightGreen, LightCyan, LightRed, LightMagenta,
//    Yellow, White
//};
//
//void setColor(Color text, Color background)
//{
//    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
//}//reng ucun
//
//
//void SetCursor(int x, int y) //x y e gore kordinat
//{
//    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
//    COORD Coord = { x,y };
//    SetConsoleCursorPosition(hStdOut, Coord); //lazimi kordinata kecid
//}