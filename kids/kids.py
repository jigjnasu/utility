# filename: column_sum_3x3.py
from reportlab.lib.pagesizes import A4
from reportlab.pdfgen import canvas
from random import randint

class AdwitaAtharv(object):
    def __init__(self, title, file_name):
        self.title = title
        self.file_name = file_name

    def generate_sum_sub_problems(self):
        c = canvas.Canvas(self.file_name, pagesize=A4)
        c.setFont("Helvetica-Bold", 20)
        width, height = A4

        c.setTitle(self.title)
        # Margins and spacing
        left_margin = 100
        top_margin = height - 150
        horizontal_gap = 120
        vertical_gap = 120
        
        # Draw title
        c.drawCentredString(270, height-50, self.title)

        # Generate 6x4 grid of problems
        for row in range(6):
            for col in range(4):
                op = '+' if self._generate_op() == 1 else '-'
                a, b = self._generate_addition_problem()

                if op == '-' and a < b:
                    a, b = b, a
                x = left_margin + col * horizontal_gap
                y = top_margin - row * vertical_gap
                self._draw_sum_sub_problem(op, c, x, y, a, b)

        c.save()
        print(f"PDF '{self.file_name}' created successfully!!!")

    def generate_mul_div_problems(self):
        c = canvas.Canvas(self.file_name, pagesize=A4)
        c.setFont("Helvetica-Bold", 16)
        width, height = A4

        c.setTitle(self.title)
        # Margins and spacing
        left_margin = 100
        top_margin = height - 100
        horizontal_gap = 250
        vertical_gap = 50
        
        # Draw title
        c.drawCentredString(270, height-50, self.title)

        # Generate 20x2 grid of problems
        for row in range(15):
            for col in range(2):
                op = 'x' if self._generate_op() == 1 else '\u00F7'  # Unicode for division symbol
                a = randint(2, 12)
                b = randint(2, 12) 
                if op == '\u00F7':
                    a = a * b
                x = left_margin + col * horizontal_gap
                y = top_margin - row * vertical_gap
                self._draw_mul_div_problem(op, c, x, y, a, b)

        c.save()
        print(f"PDF '{self.file_name}' created successfully!!!")

    def _generate_op(self):
        return randint(1, 2)

    def _generate_addition_problem(self):
        """Generate two random 3-digit numbers for column addition."""
        a = randint(100, 999)
        b = randint(100, 999)
        return a, b

    def _draw_sum_sub_problem(self, op, c, x, y, a, b):
        """Draws a single column addition problem at position (x, y)."""
        # Draw first number
        c.drawCentredString(x, y, str(a))
        # Draw second number just below first
        c.drawCentredString(x, y - 30, str(b))
        # Draw operation sign to the left of the second number
        c.drawCentredString(x - 40, y - 30, op)

        # Draw line under the two numbers
        c.line(x - 35, y - 45, x + 35, y - 45)

    def _draw_mul_div_problem(self, op, c, x, y, a, b):
        # Draw first number
        c.drawCentredString(x, y, str(a))
        c.drawCentredString(x + 30 , y, op)
        c.drawCentredString(x + 60 , y, str(b))
        c.drawCentredString(x + 90 , y, '=')

def generate_adwita_sum_sub_problems():
    aa = AdwitaAtharv("Adwita's + - problems", '/media/sf_shared/adwita_sum_sub_problems.pdf')
    aa.generate_sum_sub_problems()

def generate_adwita_mul_div_problems():
    aa = AdwitaAtharv("Adwita's x \u00F7 problems", '/media/sf_shared/adwita_mul_div_problems.pdf')
    aa.generate_mul_div_problems()

if __name__ == "__main__":
    #generate_adwita_sum_sub_problems()
    generate_adwita_mul_div_problems()
