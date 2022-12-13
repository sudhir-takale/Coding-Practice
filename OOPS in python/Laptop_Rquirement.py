class Laptop:
    company_name = "apple"

    def __init__(self, display, size, name, frequency, capacity, types) -> None:
        self.display = display
        self.size = size
        self.name = name
        self.frequency = frequency
        self.capacity = capacity
        self.types = types

    

    def display_props(self):
        print(self.company_name)
        print(self.display)
        print(self.size)
        print(self.name)
        print(self.frequency)
        print(self.capacity)
        print(self.types)


hp = Laptop("oled", 15.6, "m1", "2.3ghz", 512, "SSD")
hp.display_props()
