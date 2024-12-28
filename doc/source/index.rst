.. FightRL-Engine documentation master file, created by
   sphinx-quickstart on Thu Dec 26 20:07:43 2024.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

FightRL
=======

.. attention::
   This project is still very much a work in progress. Most functionality is either missing or in early stages of development.

A game engine for a 3D fighting game, designed to support the training of AI agents through reinforcement learning techniques. It is a hobby project largely inspired by the `FightingICE project <https://github.com/TeamFightingICE/FightingICE>`_. To enable reinforcement learning, the engine was designed with the following in mind:

* **Separation of game engine logic from rendering logic**
* **Determinism**
* **Online play with rollback netcode**
* **Fast simulation**

.. toctree::
   :maxdepth: 2
   :caption: Contents:

   engine_decision
   api
