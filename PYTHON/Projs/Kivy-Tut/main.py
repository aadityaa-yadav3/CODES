from kivy.app import App
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.button import Button
from kivy.uix.pagelayout import PageLayout
from kivy.uix.label import Label

class MenuLayout(BoxLayout):
    pass

class HomeLayout(PageLayout):
    def __init__(self, **kwargs):
        super(HomeLayout, self).__init__(**kwargs)

        
    

class TheLabApp(App):
    def build(self):
        return HomeLayout()


if __name__ == "__main__":
    TheLabApp().run()