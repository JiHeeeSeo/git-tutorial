import asyncio

async def average(lst):
    print('Average ', lst, ' ...')
    sum = 0
    for x in lst:
        sum += x
    await asyncio.sleep(2.0)
    return sum/5

async def printAvg(lst):
    result = await average(lst)
    print('Average for ',lst, ' is ',result)

loop = asyncio.get_event_loop()
loop.run_until_complete(printAvg([10, 50, 40, 100, 80]))
loop.close()