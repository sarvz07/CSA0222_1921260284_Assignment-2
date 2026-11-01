# Q6 – Loan Repayment and Loop Termination

Formula summary:
- principal = 10000
- monthly rate = 2% = 0.02
- monthly payment = 2000
- loop terminates when principal <= 0
- final payment is clamped to outstanding balance
- safety limit = 360 months
- do not use `balance != 0` as a floating-point end condition
