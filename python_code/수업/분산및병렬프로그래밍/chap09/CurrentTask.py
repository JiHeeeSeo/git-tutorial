import asyncio

async def myCoroutine():
    print('My Coroutine')

async def main():
    current = asyncio.current_task()
    print(current)
loop = asyncio.get_event_loop()
try:
    loop.create_task(myCoroutine())
    loop.create_task(myCoroutine())
    loop.create_task(myCoroutine())
    loop.run_until_complete(main())
finally:
    loop.close()