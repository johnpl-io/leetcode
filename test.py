import random
from fractions import Fraction

def roll_dice():
    return random.randint(1, 6)

def simulate_rolls():
    rolls = []
    for _ in range(5):
        rolls.append(roll_dice())
    rolls.sort(reverse=True)
    return sum(rolls[:3])

def calculate_probability(target_sum, num_simulations):
    count = 0
    for _ in range(num_simulations):
        if simulate_rolls() == target_sum:
            count += 1
    probability = Fraction(count, num_simulations)
    return probability

target_sum = 1818
num_simulations = 1000000

probability = calculate_probability(target_sum, num_simulations)
fraction = probability.limit_denominator(7776)  # Simplify the fraction

print(f"The probability of obtaining a sum of {target_sum} is approximately: {fraction.numerator}/{fraction.denominator}")
