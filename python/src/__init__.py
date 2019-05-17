"""
    otcuba --- An OpenTURNS module
    ==================================

    Contents
    --------
      'otcuba' is a module for OpenTURNS

"""

import sys
if sys.platform.startswith('win'):
    # this ensures OT dll is loaded
    import openturns

from .otcuba import *

__version__ = '0.0'

