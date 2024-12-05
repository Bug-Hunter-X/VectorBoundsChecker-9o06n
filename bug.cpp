std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i <= myVector.size(); ++i) {
  std::cout << myVector[i] << std::endl;
}

This code will cause a segmentation fault (or similar crash).  The error is in the loop condition `i <= myVector.size()`.  Vectors are zero-indexed, so valid indices range from 0 to `myVector.size() - 1`.  Accessing `myVector[myVector.size()]` attempts to access an element beyond the vector's bounds, leading to undefined behavior.