class Array
{

    private:
    double *ptr;
    int arraySize;


    public:
    Array(){};
    ~Array(){};
    Array(const int size, const double value[]);
    void setValues(double values[]);
    void setarraySize(int size);
    void print();
    Array& operator=(const Array &obj);

}