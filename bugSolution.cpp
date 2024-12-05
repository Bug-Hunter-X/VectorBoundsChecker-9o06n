std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i < myVector.size(); ++i) {
  std::cout << myVector[i] << std::endl;
}

Alternatively, use iterators for safer and more idiomatic C++:

for (int& element : myVector) {
  std::cout << element << std::endl;
}

Or

for (auto it = myVector.begin(); it != myVector.end(); ++it) {
  std::cout << *it << std::endl;
} 