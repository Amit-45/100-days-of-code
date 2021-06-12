class MyClass {
  public:    // Public access specifier
    int x;   
  private:   // Private access specifier
    int y;   
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // As x is public , it is allowed
  myObj.y = 50;  // As y is private , it is not allowed
  return 0;
}
