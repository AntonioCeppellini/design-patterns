from typing import List, Iterator

# Concrete Collection
class NumberCollection:
    def __init__(self, numbers: List[int]):
        self._numbers = numbers
    
    def __iter__(self) -> Iterator[int]:
        return iter(self._numbers)

# Usage
collection = NumberCollection([1, 2, 3, 4, 5])
for num in collection:
    print(num)  # Output: 1 2 3 4 5
