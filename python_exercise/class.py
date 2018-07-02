class Student(object):
    def __init__(self,name,score):
         self.name=name
         self.score=score
    def print_score(self):
        print('%s: %s'%  (self.name,self.score))
bart=Student('a',3)
bart.print_score()

class Screen(object):
    @property
    def width(self):
        return self._width
    @width.setter
    def width(self,value):
        self.width=value
    @property
    def height(self):
        return self._height
    @_height.setter
    def width(self,value):
        self.height=value
    @property
    def resolution(self):
        return self._width*self._height


