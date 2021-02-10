from time import sleep
from threading import Thread

class Hello(Thread):
    def run(self):
        for i in range(1,4):
            print("Jatin" , i)
            sleep(1)

class Hi(Thread):
    def run(self):
        for i in range(1,4):
            print("Yadav" , i)
            sleep(1)

fname = Hello()
lname = Hi()

fname.start()
sleep(0.2)
lname.start()

fname.join()
lname.join()

print("Thankyou!!")
