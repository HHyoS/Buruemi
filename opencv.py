
import cv2

def main():
    # 웹캠을 연다. 기본 카메라는 인덱스 0입니다.
    cap = cv2.VideoCapture(0)

    if not cap.isOpened():
        print("Failed to open camera.")
        return

    while True:
        # 현재 프레임을 읽는다.
        ret, frame = cap.read()
        if not ret:
            print("Failed to read frame.")
            break

        # 프레임을 화면에 표시한다.
        cv2.imshow("USB Webcam", frame)

        # 'q' 키를 누르면 종료한다.
        if cv2.waitKey(1) & 0xFF == ord("q"):
            break

    # 리소스를 해제하고 창을 닫는다.
    cap.release()
    cv2.destroyAllWindows()

if __name__ == "__main__":
    main()
