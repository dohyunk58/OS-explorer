동국대학교 운영체제 팀 프로젝트

### 주제

Mini Operating System 구현

### 실행 방법

1. Docker 빌드
  `docker build -t 이미지이름 .`
2. Docker 이미지 실행
  `docker run -it --name 이미지이름`

### 기능

1. 함수
- cat
- cd
- chmod
- clear
- diff
- mkdir
- mv
- pwd
- rmdir
- touch
- whereis

### TODO

  - [ ] 명령어 동시 작업 발생 시 멀티스레딩 적용(동시 작업 발생 경우 정리)

명령어 구현
  - [ ] 명령어 별 옵션 구현(ex. ls -al)
  - [ ] mkdir: 다수의 폴더 동시 생성
  - [x] ls
  - [x] cd
  - [x] cat
  - [x] pwd
  - [x] chmod
  - [x] clear
  - [x] mv
  - [x] rmdir
  - [x] 추가 명령어 3가지
  - [x] 링크 트리 구조 구현 (헤더파일 별 분리)
  - [x] 파일 입출력: 폴더/파일 생성 현황 Read/Write