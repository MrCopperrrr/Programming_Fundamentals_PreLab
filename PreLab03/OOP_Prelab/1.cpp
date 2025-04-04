class Integer {
    private:
        int val;
    public:
        Integer(int initialValue) : val(initialValue) {}
        void setValue(int newValue) {
            val = newValue;
        }
        int getValue() const {
            return val;
        }
};
