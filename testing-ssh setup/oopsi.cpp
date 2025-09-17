##just setting up the ssh key and checking if i can push into my repo or not

#include <iostream>
#include <memory>
#include <vector>
#include <cmath>

class Shape {
protected:
    std::string name;
public:
    Shape(std::string n) : name(std::move(n)) {}
    virtual ~Shape() = default;                  // virtual destructor
    virtual double area() const = 0;             // pure virtual - abstract base
    virtual void info() const {
        std::cout << name << " area: " << area() << '\n';
    }
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : Shape("Circle"), r(radius) {}
    double area() const override { return M_PI * r * r; }
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double width, double height) : Shape("Rectangle"), w(width), h(height) {}
    double area() const override { return w * h; }
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>(2.5));
    shapes.push_back(std::make_unique<Rectangle>(3.0, 4.0));

    for (const auto& s : shapes) {
        s->info(); // calls the overridden area() at runtime
    }

    return 0;
}


##adding extra lines for testing