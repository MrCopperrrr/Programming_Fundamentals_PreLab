class Room {
    private:
        double length;
        double breadth;
        double height;
    public:
        Room(double len, double brd, double hgt) : length(len), breadth(brd), height(hgt) {}
        double calculateArea() {
            return length * breadth;
        }
        double calculateVolume() {
            return length * breadth * height;
        }
};