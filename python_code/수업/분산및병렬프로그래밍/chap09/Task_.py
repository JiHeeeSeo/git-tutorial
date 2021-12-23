# Future와 유사한 객체 이벤트 루프 내에서 coroutine을 실행함
import asyncio
import time

async def myTask(n):
    time.sleep(1)
    print('Processing {}'.format(n))

async def myGenerator():
    for i in range(5):
        asyncio.ensure_future(myTask(i))
    print('Completed Tasks')
    await asyncio.sleep(2)

def main():
    loop = asyncio.get_event_loop()
    loop.run_until_complete(myGenerator())
    loop.close()

if __name__ == '__main__':
    main()