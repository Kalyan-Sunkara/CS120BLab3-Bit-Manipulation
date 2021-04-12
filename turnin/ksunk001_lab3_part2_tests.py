# Array of tests to run (in order)
# Each test contains
#   description - 
#   steps - A list of steps to perform, each step can have
#       inputs - A list of tuples for the inputs to apply at that step
#       *time - The time (in ms) to wait before continuing to the next step 
#           and before checking expected values for this step. The time should be a multiple of
#           the period of the system
#       *iterations - The number of clock ticks to wait (periods)
#       expected - The expected value at the end of this step (after the "time" has elapsed.) 
#           If this value is incorrect the test will fail early before completing.
#       * only one of these should be used
#   expected - The expected output (as a list of tuples) at the end of this test
# An example set of tests is shown below. It is important to note that these tests are not "unit tests" in 
# that they are not ran in isolation but in the order shown and the state of the device is not reset or 
# altered in between executions (unless preconditions are used).
tests = [ {'description': 'Level 1-2',
    'steps': [ {'inputs': [('PINA',0x02)], 'iterations': 5 } ],
    'expected': [('PORTC',0x60)],
    },
    {'description': 'Level 3-4',
    'steps': [ {'inputs': [('PINA', 0x04)],'iterations': 5}],
    'expected': [('PORTC',0x70)],
    }, 
    {'description': 'Level 5-6',
    'steps': [ {'inputs': [('PINA', 0x05)],'iterations': 5}],
    'expected': [('PORTC',0x38)],
    },
    {'description': 'Level 7-8-9',
    'steps': [ {'inputs': [('PINA', 0x09)],'iterations': 5}],
    'expected': [('PORTC',0x3C)],
    },
    {'description': 'Level 10-11-12',
    'steps': [ {'inputs': [('PINA', 0x0B)],'iterations': 5}],
    'expected': [('PORTC',0x3E)],
    },
    {'description': 'Level 13-14-15',
    'steps': [ {'inputs': [('PINA',0x0F)], 'iterations': 5 } ],
    'expected': [('PORTC',0x3F)],
    },
    ]
#watch = ['<function>::<static-var>','PORTB']

