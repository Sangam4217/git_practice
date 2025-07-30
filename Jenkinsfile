pipeline {
    agent any   // Run on any available agent

    environment {
        APP_ENV = 'staging'
    }

    stages {
        stage('Checkout') {
            steps {
                git 'https://github.com/user/repo.git'
            }
        }

        stage('Build') {
            steps {
                echo "Building the application"
                sh 'make build'
            }
        }

        stage('Test') {
            steps {
                echo "Running tests"
                sh 'make test'
            }
        }

        stage('Deploy') {
            steps {
                echo "Deploying to $APP_ENV"
                sh './deploy.sh'
            }
        }
    }

    post {
        success {
            echo "Pipeline completed successfully!"
        }
        failure {
            echo "Pipeline failed!"
        }
    }
}

