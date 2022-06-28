class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        results = []
        products.sort()

        left, right = 0, len(products) - 1

        for i in range(len(searchWord)):
            character = searchWord[i]

            while left <= right and (len(products[left]) <= i or products[left][i] != character):
                left += 1
            while left <= right and (len(products[right]) <= i or products[right][i] != character):
                right -= 1

            results.append([])
            remain = right - left + 1

            for j in range(min(3, remain)):
                results[-1].append(products[left + j])

        return results