class Solution:
    def arrayStringsAreEqual(self, word1: list[str], word2: list[str]) -> bool:

        x=""
        y=""

        x += "".join(word1)
        y += "".join(word2)

        if(x==y):
            return True

        return False
        