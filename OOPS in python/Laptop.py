
class Processor():
    def __init__(self, name, speed) -> None:
        self.name = name
        self.speed = speed

    def Display3(self):
        print(self.name)
        print(self.speed)


class Drive():
    def __init__(self, type, capacity) -> None:
        self.type = type
        self.capacity = capacity
        p1 = Processor("m1", 23)
        p1.Display3()

    def Display2(self):

        print(self.type)
        print(self.capacity)


class Display():
    def __init__(self, size, display) -> None:
        self.size = size
        self.display = display
        d1 = Drive("SSD", 512)
        d1.Display2()

    def Display1(self):

        print(self.size)
        print(self.display)


class Laptop():
    d = Display(34.4, "oLED")
    d.Display1()

    def __init__(self, com_name) -> None:
        self.com_name = com_name

    def Display_props(self):
        return f"{self.com_name}"


hp = Laptop("hp")
print(hp.Display_props())
