# Notes

## 1.6 - Predicates and quantifiers

**_predicate_** a logical statement whose truth value is a function of one or more variables

> x is odd.
> 16 = x^2

**_domain_** of a variable in a predicate is the set of all possible values for the variable.

**_universal quantifier_** ∀

> The logical statement ∀x P(x) is read "for all x, P(x)" or "for every x, P(x)".
> The statement ∀x P(x) asserts that P(x) is true for every possible value for x in its domain.
> The symbol ∀ is a **universal quantifier** and the statement ∀x P(x) is called a **universally quantified statement**.
> ∀x P(x) is a proposition because it is either true or false. ∀x P(x) is true if and only if P(n) is true for every n in the domain.

**_counterexample_** for a universally quantified statement is an element in the domain for which the predicate is false.

> For example, consider the statement ∀x (x2 > x), in which the domain is the set of positive integers.
> When x = 1, then x2 = x and the statement x2 > x is not true.
> Therefore x = 1 is a counterexample that shows the statement "∀x (x2 > x)" is false.

**_existential quantifier_** ∃

> The logical statement ∃x P(x) is read "There exists an x, such that P(x)".
> The statement ∃x P(x) asserts that P(x) is true for at least one possible value for x in its domain.
> The symbol ∃ is an **existential quantifier** and the statement ∃x P(x) is called a **existentially quantified statement**.

## 1.7 - Quantified statements

**_quantified statement_** a logical statement that includes a universal or existential quantifier

> NOTE: The quantifiers ∀ and ∃ are applied before the logical operations (∧, ∨, →, and ↔) used for propositions. This means that the statement ∀x P(x) ∧ Q(x) is equivalent to (∀x P(x)) ∧ Q(x) as opposed to ∀x (P(x) ∧ Q(x)).

**_free variable_** variable x is the predicate P(x) because it is free to take on any value in the domain. The variable x in the statement ∀x P(x) is a **bound variable** because the variable is bound to a quantifier.

> (∀x P(x)) ∧ Q(x)
>
> the x in P(x) is bound by the universal quantifier but Q(x) is not, therefore it is _NOT a proposition_
>
> ∀x (P(x) ∧ Q(x))
>
> both variable x's are bound by the univeral quantifier (∀x), therefore it is a _proposition_

**_Logical equivalence with quantified statements_** \
Two quantified statements have the same logical meaning if they have the same truth value regardless of the predicates for the elements in the domain

> P(x): x came to the party
> S(x): x was sick
>
> "Everyone was not sick" is logically equivalent to "∀x ¬S(x)"

## 1.8 - De Morgan's law for quantified statements

The negation operation can be applied to a quantified statement

> ¬∀x F(x)
>
> x is the set of all birds
> F(x) is "x can fly"
>
> "Not all birds can fly."
>
> which create the following logical equivalence:
>
> ¬∀x F(x) ≡ ∃x ¬F(x)

![Summary of De Morgan's laws for quantified statements](./Table-1.5.1.png)

**_Applying De Morgan's law for quantified statements to English statements_**

> P(x): x showed up with a pencil
> C(x): x showed up with a calculator
>
> Sample question: Every student showed up with a calculator.
>
> ∀x C(x)
> Negation: ¬∀x C(x)
> Applying De Morgan's law: ∃x ¬C(x)
> English: Some student showed up without a calculator.

## 1.9 - Nested quantifiers

**_nested quantifiers_** a logical expression with more than one quantifier that bind different variables in the same predicate

![Nested quantifiers and bound variables](./Figure-1.9.1.png)

> ∀x Q(x, y)
> y is not bound
>
> ∀z ∃y Q(x, y, z)
> not a proposition because x is free

**nested quantifiers of the same type**

> for the set of all non-negative integers
>
> ∀x ∀y (xy = 1)
> False. Counter example x=1 y=2
>
> ∃x ∃y (( x+y = x ) ∧ ( y ≠ 0 ))
> The only way for x+y = x is for y = 0. Therefore, there are no two integers x and y such that x+y = x and y ≠ 0.

**alternating nested quantifiers**

> ∃x ∀y M(x, y)
> ∃x ∀y M(x, y) ↔ "There is a person who sent an email to everyone."
>
> switching the quantifiers switches the meaning
>
> ∀x ∃y M(x, y) ↔ "Every person sent an email to someone."

**_two player game_** One of the players is the "existential player" and the other player is the "universal player". The variables are set from left to right in the expression.

![Nested quantifiers as a two person game](./Table-1.9.1.png)

> ∀x ∃y (x + y = 0)
>
> The universal player first selects the value of x. Regardless of which value the universal player selects for x, the existential player can select y to be -x, which will cause the sum x + y to be 0. Because the existential player can always succeed in causing the predicate to be true, the statement ∀x ∃y (x + y = 0) is true.
>
> Switching the order of the quantifiers gives the following statement:
>
> ∃x ∀y (x + y = 0)
>
> Now, the existential player goes first and selects a value for x. Regardless of the value chosen for x, the universal player can select some value for y that causes the predicate to be false. For example, if x is an integer, then y = -x + 1 is also an integer and x + y = 1 ≠ 0. Thus, the universal player can always win and the statement ∃x ∀y (x + y = 0) is false.

> More examples:
> For all real numbers, xy.
>
> ∀x ∃y (xy = 1)
> false. If the universal player selects x to be 0, then there is no value that the existential player can select for y that can make xy = 1.
>
> ∃x ∀y (xy = y)
> true. If x is chosen to be 1, then xy = y for any choice of y.

**De Morgan's law with nested quantifiers** \
De Morgan's law can be applied to logical statements with more than one quantifier. Each time the negation sign moves past a quantifier, the _quantifier changes type from universal to existential_ or from _existential to universal_:

![De Morgan's laws for nested quantified statements](./Table-1.9.2.png)
