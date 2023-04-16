#include <iostream>
#include <fstream>

int main() {
  std::cout << "Enter file path: " << std::endl;
  std::string address;
  std::cin >> address; //C:\Users\User\Desktop\Word.txt
  std::ifstream text;
  text.open(address, std::ios::binary);
  if (!text.is_open()) {
    std::cout << "File opening error!" << std::endl;
  } else {
    const int sizeBuffer = 20;
    char buffer[sizeBuffer + 1];
    while (!text.eof()) {
      text.read(buffer, sizeBuffer);
      buffer[sizeBuffer] = 0;
      std::cout << buffer;
      int count = 0;
      while (count <= sizeBuffer) {
        buffer[count] = ' ';
        count++;
      }
    }
    text.close();
  }
  return 0;
}

