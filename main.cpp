#include <iostream>
#include "ErrorInfo.hpp"
#include "Sequence.hpp"
#include "ArraySequence.hpp"
#include "ListSequence.hpp"
#include "Test.hpp"
#include "MapWhereReduce.hpp"
#include "print.hpp"
#include <iomanip>
#include "Sum.hpp"
#include "RectangleMatrix.hpp"
#include "SquareMatrix.hpp"
#include "TriangleMatrix.hpp"
#include "ComplexNumbers.hpp"

int main() {
    auto* items = new double [4];
    for (int i = 0; i < 4; ++i) {
        std :: cout << "items[" << i << "] = ";
        std :: cin >> items[i];
    }
    auto* arraySequence = new ArraySequence<double>(items, 4);
    arraySequence->InsertAt(5, 3);
    PrintSequence(arraySequence);
    return 0;
}
