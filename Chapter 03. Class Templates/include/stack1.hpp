#include <vector>
#include <stdexcept>

template <typename T>
class Stack
{
  public:
    void push(T const &);
    T pop();
    T top() const;
    bool empty() const { return elems.empty(); }

  private:
    std::vector<T> elems;
};

template <typename T>
void Stack<T>::push(T const &_elem)
{
    elems.push_back(_elem);
}

template <typename T>
T Stack<T>::pop()
{
    if (elems.empty())
    {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }
    T elem = elems.back();
    elems.pop_back();
    return elem;
}

template <typename T>
T Stack<T>::top() const
{
    if (elems.empty())
    {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }
    return elems.back();
}