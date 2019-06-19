

# Problem: Given a list of numbers and a number k, return whether any two numbers from the list add up to k
# For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17 
# Bonus: Can you do this in one pass? 


def addToK(numArr, k): 
  for i in range(len(numArr)):
    if i == k: 
      return True 

    sum = i 
    for j in range(len(numArr) + 1):
      sum += numArr[i]

      if sum == k:
        return True 
  
  return False 




# Test Cases 
case = [[], [10, 15, 3, 7], [10], [5, 7]]
knum = [0, 17, 10, 11]
result = [False, True, True, False]
testCount = 0

def testResult(a, b):
  if a == b: 
    return "PASSED"

  return "FAILED"

for i in case:
  print("")
  print("Currently testing case number " , testCount)
  print("Array: ",case[testCount])
  # print("Correct Result: ", result[testCount])
  # print("Actual Result: ", addToK(case[testCount], knum[testCount]))
  print("Test Result: ", testResult(result[testCount], addToK(case[testCount], knum[testCount])))
  testCount += 1
  print("")
