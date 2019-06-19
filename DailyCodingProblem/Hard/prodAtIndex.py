

# Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
# For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
# Follow-up: what if you can't use division?

case0 = [1, 2, 3, 4, 5]
ans0 = [120, 60, 40, 30, 24]

case1 = []
ans1 = []

case2 = [-4, 1, 5, 3]
ans2 = [15, -60, -12, -20]


def prodAtIndex(arr):
  ansArr = []
  for i in range(len(arr)):
    product = 1
    for j in range(len(arr)):
      if i != j:
        product *= arr[j]

    ansArr.append(product)

  return ansArr  



def testResult(a, b):
  #for i in range(len(a)):
  if a == b:
    return "PASSED"
  else:
    return "FAILED"

print("---------------------------------------------------")
print("Testing Case 0")
print(case0)
print("Answer Result: ", prodAtIndex(case0))
print("Test Result: ", testResult(ans0, prodAtIndex(case0)))
print("---------------------------------------------------")

print("---------------------------------------------------")
print("Testing Case 1")
print(case1)
print("Answer Result: ", prodAtIndex(case1))
print("Test Result: ", testResult(ans1, prodAtIndex(case1)))
print("---------------------------------------------------")

print("---------------------------------------------------")
print("Testing Case 2")
print(case2)
print("Answer Result: ", prodAtIndex(case2))
print("Test Result: ", testResult(ans2, prodAtIndex(case2)))
print("---------------------------------------------------")


