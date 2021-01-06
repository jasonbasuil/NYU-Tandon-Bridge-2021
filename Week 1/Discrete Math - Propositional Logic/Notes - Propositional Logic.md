# Notes

## 1.1 Propositions and logical operations

**_Propositions_** are typically declarative sentences, either True or False.

**_Compound propositions_** are individual propositions connected with logical operations.

**_logical operation_** combines propositions using a particular rule

> For example, the conjunction operation is denoted by ∧. The proposition p ∧ q is read "p and q" and is called the conjunction of p and q. p ∧ q is true if both p is true and q is true. p ∧ q is false if p is false, q is false, or both are false.

**_Truth table_** shows the truth value of a compound proposition for every possible combination of truth balues for the variables contained in the compound proposition.

**_disjunction_** if either p or q is true, both are true. Read "p or q".

> p ∨ q: January has 31 days or February has 33 days. The proposition p ∨ q is true because January does have 31 days.

**_ambiguity of "or"_** an either/or meaning corresponds to the **_exclusive or operation._**

The exclusive or operation is usually denoted with the symbol ⊕. _Exactly one of the propositions p or q is true but NOT both._

> "Lucy opens the windows or doors when warm" means she opens windows, doors, or possibly both. Since the inclusive or is most common in logic, it is just called "or" for short.

**_negation_** acts on the opposite on one proposition. Kind of like the bang ! operator in javascript.

> The negation of proposition p is denoted -p ("not p")

## 1.2 - Evaluating compound propositions

**Order of operations in absence of parentheses**

> 1. ¬ (not)
> 2. ∧ (and)
> 3. ∨ (or)
>
> p ∨ q ∧ r should be read as p ∨ (q ∧ r)

**Filling in the rows of a truth table**
If there are n variables, there are 2^n rows. In the truth table for the compound proposition (p ∨ r) ∧ ¬q, there are three variables and 2^3 = 8 rows.

## 1.3 - Conditional statements

**_conditional operation_** is denoted with the → symbol

> p → q is read "if p then q"

**_conditional proposition_** a compound proposition that uses a conditional operation (or conditional statement)

> p → q, the proposition p is called the **_hypothesis_**, and the proposition q is called the **_conclusion_**.
>
> it can be thought of like a contract between two parties
>
> "If you mow Mr. Smith's lawn, then he will pay you."
> or in logic terms, a statement can only be false if is hypothesis is true and the conclusion is false

**_converse, contrapositive, and inverse_**

> **converse** q → p
> "If the game is cancelled, it is raining today."
>
> **contrapositive** ¬q → ¬p
> "If the game is not cancelled, then it is not raining today."
>
> **inverse** ¬p → ¬q
> "If it is not raining today, the game will not be cancelled."

**_biconditional operation_**

> p ↔ q
> "p if and only if q"
> or
> "p is necessary and sufficient for q"
> or
> "if p, then q, and conversely"
