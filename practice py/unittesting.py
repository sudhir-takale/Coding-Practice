
import unittest
class TestDemo(unittest.TestCase):
    def setUp(self) -> None:
        print('setup method is executing')
        # return super().setUp()
    def test(self):
        print('text method execution')
    def test_method(self):
        print('sudhir is the programmer')
    def tearDown(self) -> None:
        print('teardown method is executing')
        # return super().tearDown()
if __name__ == '__main__': #it is also optional
    unittest.main()