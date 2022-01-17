# guess-number
1~50까지 정수 중 하나의 수를 예측하는 게임

[프로그램 설명]
1. 1~50까지 정수 중 랜덤으로 하나 추출하여 answer 변수에 저장
2. Player에게 입력 받은 정수는 userGuess에 저장
3. userGuess와 answer가 같을 때까지 반복
  - 시행할 때마다 시도 횟수를 증가
  - userGuess > answer : “높네요. 낮추세요“ 출력
  - userGuess < answer : “낮네요. 높이세요“ 출력
4. 정답을 맞추면 정답 메시지와 시도 횟수를 함께 출력 
