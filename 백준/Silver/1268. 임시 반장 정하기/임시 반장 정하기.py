import sys

def solve():

    # 학생 수 입력

    n = int(sys.stdin.readline())

    

    # 학년별 반 정보 입력 (학생 번호를 0부터 시작하도록 처리)

    classes = []

    for _ in range(n):

        classes.append(list(map(int, sys.stdin.readline().split())))

    max_friends = -1

    leader = 0

    # 각 학생(i)에 대해 조사

    for i in range(n):

        same_class_friends = set() # 중복 제거를 위해 set 사용

        

        # 다른 학생(j)과 비교

        for j in range(n):

            if i == j: continue # 자기 자신은 제외

            

            # 1학년부터 5학년까지 확인

            for k in range(5):

                if classes[i][k] == classes[j][k]:

                    same_class_friends.add(j) # 같은 반이었던 친구 번호 저장

                    break # 한 번이라도 같으면 해당 친구는 체크 완료

        

        # 현재 학생의 친구 수가 기존 최댓값보다 크면 갱신

        count = len(same_class_friends)

        if count > max_friends:

            max_friends = count

            leader = i + 1 # 학생 번호는 1부터 시작

    print(leader)

solve()