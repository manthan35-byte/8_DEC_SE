"""
Explore the folder structure of your 'foodiehub_project' and write down the purpose of each key file: manage.py,
settings.py, urls.py, wsgi.py, and asgi.py.<br><br><em><strong>Hint:</strong> Check the official Django 
documentation or use ChatGPT to help you describe each file's role.</em>
"""
"""
Django Project File Structure
foodiehub_project/
│
├── manage.py
└── foodiehub_project/
    ├── __init__.py
    ├── settings.py
    ├── urls.py
    ├── wsgi.py
    └── asgi.py

--->>Purpose of Key Files::

manage.py: A command-line utility that lets you interact with your Django project in various ways (e.g., running the development
server via python manage.py runserver, executing migrations, or creating superusers).

settings.py: The core configuration file for your Django project. It contains settings for database connections, installed apps,
middleware, static files, security keys, and internationalization.

urls.py: The "URL router" of your project. It maps incoming website URLs to the appropriate views or app-level URL configurations,
telling Django what to display when a user visits a specific link.

wsgi.py: Stands for Web Server Gateway Interface. It is the entry point used by traditional synchronous web servers to serve your
Django application in production.

"""
