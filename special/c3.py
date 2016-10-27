def check_felin(strs):
    str_list = list()
    str_list = strs
    while True:
        size = len(str_list)
        reverse = size - 1
        flag = 0
        for num in range(size):

            if num == reverse:
                return len(str_list)

            if str_list[num] != str_list[reverse]:
                str_list.insert(reverse+1, str_list[num])
                flag = 1
                break

            reverse -= 1

        if flag == 0:
            return len(str_list)


class Solution:
    def solution(self,  str_list):
        inputs = list(str_list)
        if len(str_list) == 1:
            return 1

        return check_felin(inputs)


if __name__ == "__main__":
    r1 = input()

    input_list = list(r1)

    result = Solution().solution(input_list)

    print(result)
