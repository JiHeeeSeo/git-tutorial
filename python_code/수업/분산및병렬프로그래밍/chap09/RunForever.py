import asyncio

async def hello_world():
    await asyncio.sleep(1)      #여기서 1초 쉬시구여
    print('Hello World')
    asyncio.ensure_future(hello_world())        #이 함수를 계속 무한반복

async def good_evening():
    await asyncio.sleep(1)      #여기서 1초 쉬시구여
    print('Good Evening')
    asyncio.ensure_future(good_evening())       #여기서 무한반복

print('step: asyncio.get_event_loop()')
loop = asyncio.get_event_loop()
try:
    print('step: loop.run_forever()')           #함수 호출해주세용
    asyncio.ensure_future(hello_world())
    asyncio.ensure_future(good_evening())
    loop.run_forever()
except KeyboardInterrupt:
    pass
finally:
    print('step: loop.close()')
    loop.close()